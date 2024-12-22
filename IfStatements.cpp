 #include <iostream>

 int main()
 {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age > 18)
        std::cout << "You are old\n";
    else
        std::cout << "You are a baby\n";
    return 0;
 }