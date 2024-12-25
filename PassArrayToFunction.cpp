#include <iostream>

double getTotal(double prices[], int size)
{
    double total = 0;

    for(int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}

int main()
{
    double prices[] = {49.99, 15.05, 75, 9.99, 5000};
    int size;

    size = sizeof(prices)/sizeof(prices[1]);
    double total = getTotal(prices, size);

    std::cout << "$" << total << '\n';

    return 0;
}