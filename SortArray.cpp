#include <iostream>

void sort(int array[], int size)
{
    int temp;

    std::cout << "Here is the size of an array: " << size << '\n';
    
    for (int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size - 2; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
        
    }

    std::cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}
int main()
{
    int array[] = {5, 3, 2, 8, 1, 4, 6, 7, 9, 0};

    int size = sizeof(array)/sizeof(array[0]);

    std::cout << "Array: ";
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
    sort(array, size);

    return 0;
}