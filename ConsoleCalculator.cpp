 #include <iostream>

 int main()
 {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "************ CALCULATOR ************\n";

    std::cout << "Enter operation sign: ";
    std::cin >> op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (op == '+')
    {
        result = num1 + num2;
        std::cout << result << "\n";
    }
    else if (op == 45)
    {
        result = num1 - num2;
        std::cout << result << "\n";
    }
    else if (op == 42)
    {
        result = num1 * num2;
        std::cout << result << "\n";
    }
    else if (op == 47)
    {
        result = num1 / num2;
        std::cout << result << "\n";
    }
    // else if (op == 37)
    // {
    //     result = num1 % num2;
    //     std::cout << result << "\n";
    // }
    else
        std::cout << "Wrong input -- sign only (+ - * / %) -- numbers only digits\n";

    std::cout << "*************************************";
    return 0;
 }