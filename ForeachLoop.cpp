#include <iostream>

int main()
{
    std::string students[] = {"Akzhol", "Erna", "Zhoha", "Antoha"};

    for(std::string student : students)
    {
        std::cout << student << '\n';
    }

    return 0;
}