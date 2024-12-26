#include <iostream>

int main()
{
    int size = 10;

    std::string foods[size];

    fill(foods, foods + (size/2), "horse");
    fill(foods + (size/2), foods + size, "meat");

    for(std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}