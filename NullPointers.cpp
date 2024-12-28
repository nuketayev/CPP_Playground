#include <iostream>

int main()
{
    int *pointer = nullptr;

    int x = 123;

    // pointer = &x;

    if(pointer == nullptr)
    {
        std::cout << "Address was not assigned and its ocupied!\n";
        std::cout << *pointer << '\n';
    }
    else
    {
        std::cout << "Addsress was assigned!\n";
        std::cout << *pointer << '\n';
    }

    return 0;
}