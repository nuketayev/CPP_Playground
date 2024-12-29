#include <iostream>

void drawBoard(char *spaces)
{
    std::cout << '\n';
    std::cout << "***Game table***\n";

    std::cout << "   |   |   " << '\n';
    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << '\n';
    std::cout << "__1|__2|__3" << '\n';
    std::cout << "   |   |   " << '\n';
    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << '\n';
    std::cout << "__4|__5|__6" << '\n';
    std::cout << "   |   |   " << '\n';
    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << '\n';
    std::cout << "  7|  8|  9" << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player)
{
    int pos;

    do{
        std::cout << "Where do you want to place '" << player <<"'? (1-9): ";
        std::cin >> pos;
        pos -= 1;

        if (spaces[pos] == ' ')
        {
            spaces[pos] = player;
            break;
        }
        else if(pos >= 0 && pos < 9 || spaces[pos] == player)
            std::cout << "The slot is already occupied!\n";
        else
            std::cout << "Invalid position.\n";
    }while(true);        
}

void computerMove(char *spaces, char computer)
{
    srand(time(0));
    int pos = rand() % 9;

    do
    {
        if (spaces[pos] == ' ')
        {
            spaces[pos] = computer;
            break;
        }
        else
            pos = rand() % 9;
    }while(true);
}

bool checkWinner(char *spaces, char player, char computer)
{
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player ? std::cout << "You WIN!\n" : std::cout << "You LOST!\n";
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player ? std::cout << "You WIN!\n" : std::cout << "You LOST!\n";
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == player ? std::cout << "You WIN!\n" : std::cout << "You LOST!\n";
    }

    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == player ? std::cout << "You WIN!\n" : std::cout << "You LOST!\n";
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == player ? std::cout << "You WIN!\n" : std::cout << "You LOST!\n";
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == player ? std::cout << "You WIN!\n" : std::cout << "You LOST!\n";
    }

    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == player ? std::cout << "You WIN!\n" : std::cout << "You LOST!\n";
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[2] == player ? std::cout << "You WIN!\n" : std::cout << "You LOST!\n";
    }
    else
        return false;
    return true;
}

bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if(spaces[i] == ' ')
            return false;
    }
    std::cout << "\nIt's a TIE!\n";
    return true;
}

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    char restart;

    std::cout << "Welcome to the TicTacToe game!\n";
    drawBoard(spaces);
    while(running)
    {        
        std::cout << "\nYour move!\n";
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }  

        std::cout << "\nComputer's move!\n";
        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }       

    }

    return 0;
}