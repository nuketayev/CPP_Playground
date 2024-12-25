#include <iostream>
#include <iomanip>

void showBalance(double balance)
{
   std::cout << "Your current balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit()
{
    double amount = 0;

    std::cout << "Enter amount you would like to deposit: ";
    std::cin >> amount;
    if(amount <= 0)
    {
        std::cout << "\nPlease deposit positive amount of money\n\n";
        return 0;
    }
    std::cout << amount << "$ were succesifully deposited to your acoount!\n";

    return amount;
}

double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if (amount > balance || amount < 0)
    {
        std::cout << "Insufficient funds or not a valid amount.\n";
        return 0;
    }

    return amount;
}

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "*******************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "*******************\n";

        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "GoodBye!\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    }while(choice != 4);
    
    return 0;
}