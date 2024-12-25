#include <iostream>

int searchArray(int array[], int element, int size)
{   
    int i = 0;

    while(i < size)
    {
        if (array[i] == element)
            return i;
        i++;
    }

    return -1;
}

int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int element;
    int index;
    int size;
    size = sizeof(numbers)/sizeof(numbers[0]);

    std::cout << "Enter an element to search for: ";
    std::cin >> element;

    index = searchArray(numbers, element, size);

    if (index != -1)
    {
        std::cout << "The element is on " << index << " position of the array\n";
    }
    else
        std::cout << "The element is not in the array\n";
    return 0;
}