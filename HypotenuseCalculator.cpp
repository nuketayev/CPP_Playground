#include <iostream>
#include <cmath>

 int main()
 {
    double a;
    double b;
    double c;

    std::cout << "Ender side A: ";
    std::cin >> a;

    std::cout << "Ender size B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "Hypotenuse is: " << c << "\n";
 }