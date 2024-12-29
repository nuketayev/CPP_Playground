#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    student student1;

    student1.name = "Akzhol";
    student1.gpa = 4.0;
    student1.enrolled = true;

    student student1;

    student1.name = "Lozhka";
    student1.gpa = 3.0;
    student1.enrolled = false;


    return 0;
}