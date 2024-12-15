 #include <iostream>
 #include <cmath>

//cplusplus.com/reference/cmath

 int main()
 {
    double x = 3.14;
    double a = 3.99;
    double y = 4;
    double z;

    // z = std::max(x, y);
    z = std::min(x, y);
    std::cout << z << "\n";
    
    z = std::pow(2, 3);
    std::cout << z << "\n";    
    
    z = sqrt(9);
    std::cout << z << "\n";

    z = abs(-287);
    std::cout << z << "\n";
    
    std::cout << x << "\n";
    z = round(x);
    std::cout << z << "\n";

    std::cout << x << "\n";
    z = ceil(x);
    std::cout << z << "\n";

    std::cout << a << "\n";
    z = floor(a);
    std::cout << z << "\n";

    return 0;
 }