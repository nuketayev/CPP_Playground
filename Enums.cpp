#include <iostream>

enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{   
    Day today = Monday;

    switch (today)
    {
    case Monday:
        std::cout << "Today is Monday\n";
        break;
    case Tuesday:
        std::cout << "Today is Tuesday\n";
        break;
    case Wednesday:
        std::cout << "Today is Wednesday\n";
        break;
    case Thursday:
        std::cout << "Today is Thursday\n";
        break;
    case Friday:
        std::cout << "Today is Friday\n";
        break;
    case Saturday:
        std::cout << "Today is Saturday\n";
        break; 
    case Sunday:
        std::cout << "Today is Sunday\n";
        break;
    }

    return 0;
}