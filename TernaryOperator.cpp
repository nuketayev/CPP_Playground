 #include <iostream>

int main()
{
    int grade;

    std::cout << "Enter your grade: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You didn't pass!\n";
    
    return 0; 
}