#include <iostream>

class animal
{
    public:
        bool alive = true;
    void eat()
    {
        std::cout << "This animal is eating\n";
    }
};

class Dog : public animal
{
    public:
        void bark()
        {
            std::cout << "The dog does woof!\n";
        }
};

class Cat : public animal
{
    public:

    void meow()
    {
        std::cout << "The cat goes meow!\n";
    }
};

int main()
{

    Dog dog;
    Cat cat;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();
    


    return 0;
}
