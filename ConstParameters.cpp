#include <iostream>

void printinfo(const std::string &name, const int &age)
{
    // name = "Aigerim";
    // age = 12;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

int main()
{
    std::string name = "Akzhol";
    int age = 11;

    printinfo(name, age);

    return 0;
}