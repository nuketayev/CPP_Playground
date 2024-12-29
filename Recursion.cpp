#include <iostream>

void walkIterative(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        std::cout << "You take a step!\n";
    }
}

void walkRecursive(int steps)
{   
    if (steps > 0)
    {
        std::cout << "You take a step!\n";
        walkRecursive(steps - 1);
    } 
}

int factorial(int num)
{
    if (num > 1)
        return num * factorial(num - 1);
    else
        return 1;
}

int main()
{
    int num = 5;
    int result;
    // walkIterative(10);
    // std::cout << "\n";

    // walkRecursive(10);

    result = factorial(num);

    std::cout << "Factorial of " << num << " is: " << result << '\n';

    return 0;
}