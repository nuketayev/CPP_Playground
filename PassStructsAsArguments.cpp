#include <iostream>

struct Car
{
    std::string make;
    int year;
    std::string color;
};

void printcar(Car &car)
{
    std::cout << &car << '\n';
    std::cout << car.make << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';

}

void paintcar(Car &car, std::string color)
{
    car.color = color;
}

int main()
{
    Car car1;
    Car car2;
    
    car1.make = "Toyota";
    car1.year = 2003;
    car1.color = "Silver metallic";
    car2.make = "Lexus";
    car2.year = 2007;
    car2.color = "Black";

    std::cout << &car1 << '\n';
    printcar(car1);

    paintcar(car1, "yellow");
    std::cout << car1.color << '\n';

    return 0;
}