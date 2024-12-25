#include <iostream>

int main()
{

    int size = sizeof(char);
    std::cout << "1 char\n";
    std::cout << size << " bytes\n" << size*8 << " bits\n";
    std::cout << "-----------------\n";

    size = sizeof(bool);
    std::cout << "1 bool\n";
    std::cout << size << " bytes\n" << size*8 << " bits\n";
    std::cout << "-----------------\n";

    size = sizeof(int);
    std::cout << "1 int\n";
    std::cout << size << " bytes\n" << size*8 << " bits\n";
    std::cout << "-----------------\n";

    size = sizeof(long);
    std::cout << "1 long\n";
    std::cout << size << " bytes\n" << size*8 << " bits\n";
    std::cout << "-----------------\n";

    size = sizeof(std::string);
    std::cout << "1 std::string\n";
    std::cout << size << " bytes\n" << size*8 << " bits\n";
    std::cout << "-----------------\n";

    return 0;
}