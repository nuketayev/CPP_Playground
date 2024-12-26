#include <iostream>

// 'working' test card number from internet: 6011000990139424

int getNumber(const int number)
{
    int result = (number % 10 + (number / 10 % 10));

    // std::cout << "Number: " << number << " and result: " << result << '\n';
    return result;
}

int sumOdd(const std::string cardNumber)
{
    int sum = 0;

    for (int i = 0; i <= (cardNumber.size() - 2); i+=2 )
    {
        sum += getNumber((cardNumber[i] - '0') * 2);
    }
    // std::cout << sum << '\n';

    return sum;
}

int sumEven(const std::string cardNumber)
{
    int sum = 0;

    for (int i = 1; i <= cardNumber.size(); i+=2)
        sum += (cardNumber[i] - '0');

    // std::cout << sum << '\n';
    return sum;
}

int main()
{
    std::string creditCardNumber;
    int result = 0;  

    std::cout << "Enter your credit card number: ";
    std::cin >> creditCardNumber;

    result = sumOdd(creditCardNumber) + sumEven(creditCardNumber);

    if (result % 10 == 0)
    {
        std::cout << "The entered card: " << creditCardNumber << " is valid!\n";
    }
    else
        std::cout << "The card: " << creditCardNumber << " is not valid!\n";

    return 0;
}