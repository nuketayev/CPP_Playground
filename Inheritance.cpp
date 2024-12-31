#include <iostream>

class Shape
{
    public:
        double area;
        double volume;
};

class Cube : public Shape
{
    public:
        double side;
        Cube(double side)
        {
            this->side = side;
            this->area = 6 * side * side;
            this->volume = side * side * side;
        }
};

class Sphere : public Shape
{
    public:
        double radius;
        Sphere(double radius)
        {
            this->radius = radius;
            this->area = 4 * 3.14 * radius * radius;
            this->volume = 4/3 * 3.14 * radius * radius * radius;
        }
};

int main()
{
    Cube cube(5);
    Sphere sphere(5);

    std::cout << "Sphere area: " << sphere.area << '\n';
    std::cout << "Sphere volume: " << sphere.volume << '\n';

    return 0;
}

// class animal
// {
//     public:
//         bool alive = true;
//     void eat()
//     {
//         std::cout << "This animal is eating\n";
//     }
// };

// class Dog : public animal
// {
//     public:
//         void bark()
//         {
//             std::cout << "The dog does woof!\n";
//         }
// };

// class Cat : public animal
// {
//     public:

//     void meow()
//     {
//         std::cout << "The cat goes meow!\n";
//     }
// };

// int main()
// {

//     Dog dog;
//     Cat cat;

//     std::cout << dog.alive << '\n';
//     dog.eat();
//     dog.bark();

//     std::cout << cat.alive << '\n';
//     cat.eat();
//     cat.meow();
    


//     return 0;
// }
