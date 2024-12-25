 #include <iostream>

 void greet(std::string name)
 {
    std::cout << "Good evening " << name << '\n';
    std::cout << "Welcome to the program!\n";
 }

 int main()
 {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    greet(name);
    std::cout << '\n';
    greet(name);

    return 0;
 }