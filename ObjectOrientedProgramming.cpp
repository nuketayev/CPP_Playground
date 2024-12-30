#include <iostream>

class Human
{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat() //methods
        {
            std::cout << name << " is eating\n";
        }
        void drink() //methods
        {
            std::cout << name << " is drinking\n";
        }
        void sleep() //methods
        {
            std::cout << name << " is sleeping\n";
        }
};

int main()
{

    Human enemy;

    enemy.name = "Akzhol";
    enemy.occupation = "Boss";
    enemy.age = 666;

    std::cout << enemy.name << '\n';
    std::cout << enemy.occupation << '\n';
    std::cout << enemy.age << '\n';

    enemy.drink();
    enemy.sleep();
    enemy.eat();


    return 0;
}