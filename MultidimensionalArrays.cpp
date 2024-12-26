#include <iostream>

int main()
{   
    std::string cars[][3] = {{"Chevrolet", "Ford", "Dodge"},
                            {"Toyota", "Honda", "Nissan"},
                            {"BMW", "Audi", "Mercedes"}};

    // std::cout << cars[0][0] << '\n';
    // std::cout << cars[0][1] << '\n';
    // std::cout << cars[0][2] << '\n';
    // std::cout << cars[1][0] << '\n';
    // std::cout << cars[1][1] << '\n';
    // std::cout << cars[1][2] << '\n';
    // std::cout << cars[2][0] << '\n';
    // std::cout << cars[2][1] << '\n';
    // std::cout << cars[2][2] << '\n';

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}