#include <iostream>

// Try and see memory addresses after deleting & sing line below
void swap(std::string &s1, std::string &s2)
{
    std::string temp;

    temp = s2;
    s2 = s1;
    s1 = temp;
    std::cout << "\n*****Swap function****" << "\n\n";
    std::cout << "Function -> Memory address: " << &s1 << '\n';
    std::cout << "Function -> Memory address: " << &s2 << '\n';


}

int main()
{
    std::cout << "\n*****Original****" << "\n\n";
    std::string x = "Water";
    std::string y = "Coffee";

    std::string temp;

    std::cout << x << '\n';
    std::cout << "Memory address: " << &x << '\n';
    std::cout << y << '\n';
    std::cout << "Memory address: " << &y << '\n';

    temp = y;
    y = x;
    x = temp;
    std::cout << "\n******Swap in main****" << "\n\n";

    std::cout << x << '\n';
    std::cout << y << '\n';

    swap(x, y);
    std::cout << x << '\n';
    std::cout << y << '\n';

    return 0;
}