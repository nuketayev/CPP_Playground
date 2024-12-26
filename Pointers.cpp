#include <iostream>

int main()
{   
    std::string name = "Akzhol";
    int year = 2024;
    std::string names[5] = {"Akzhol", "Aigerim", "Aruzhan", "Aruzhan", "Aruzhan"};

    std::string *pName = &name;
    int *pYear = &year;
    std::string *pNames = names;

    std::cout << "Name pointer: " << pName << '\n';
    std::cout << "Name pointer value: " << *pName << '\n';

    std::cout << '\n';

    std::cout << "Year pointer: " << pYear << '\n';
    std::cout << "Year pointer value: " << *pYear << '\n';

    std::cout << '\n';

    std::cout << "Names: " << names << '\n';
    
    std::cout << '\n';

    std::cout << "Names pointer: " << pNames << '\n';
    std::cout << "Names pointer value: " << *pNames << '\n';

    return 0;
}