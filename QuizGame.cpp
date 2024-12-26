#include <iostream>

int main()
{
    char restart;
    while(1)
    {
        std::string questions[] = {{"1. What year was C++ created?: \n"}, 
                                {"2. What is the name of the creator of C++?: \n"}, 
                                {"3. What is the name of the first C++ compiler?: \n"},
                                {"4. What is the name of the C++ standardization committee?: \n"}};

        std::string answers[] = {{"A. 1979\nB. 1983\nC. 1985\nD. 1987\n"},
                                {"A. Bjarne Stroustrup\nB. Dennis Ritchie\nC. Ken Thompson\nD. Brian Kernighan\n"},
                                {"A. Cfront\nB. Clang\nC. GCC\nD. Turbo C++\n"},
                                {"A. ISO\nB. ANSI\nC. C++ Foundation\nD. C++ Standards Committee\n"}};

        char correctAnswers[] = {'D', 'A', 'A', 'C'};

        int size = sizeof(questions) / sizeof(questions[0]);
        int score = 0;
        char guess;

        for(int i = 0; i < size; i++)
        {
            std::cout << questions[i];
            for(int j = 0; answers[i][j]; j++)
                std::cout << answers[i][j];
            std::cout << "Answer: ";
            std::cin >> guess;
            if(guess == correctAnswers[i])
            {
                score += 1;
                std::cout << "It's correct!\nYour currect score is: " << score << "\n\n";
            }      
        }
        std::cout << "It was the last question!\nYou have answered correctly: " << score << " questions out of " << size << '\n';
        std::cout << "\nDo you want to play again? (y/n): ";
        std::cin >> restart;
        if(restart == 'n')
            break;
        else if(restart == 'y')
            continue;
        else
            std::cout << "\nInvalid input\nRestarting the game\n\n";
    }
    std::cout << "Goodbye!\n";
    return 0;

}