#include <iostream>

int main()
{
    std::string name = "Akzhol";
    int age = 96;
    bool topG = true;

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &topG << "\n";

    return 0;
}