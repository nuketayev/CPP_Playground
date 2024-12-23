 #include <iostream>

 int main()
 {
    double temp;
    char unit;

    std::cout << "****** Temperature conversion *******\n";
    std::cout << "F - Fehrenheit\n";
    std::cout << "C - Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
        {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Converted temperature is: " << temp << " F\n";        
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fehrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Converted temperature is: " << temp << " C\n"; 
    }
    else
    {
        std::cout << "Invalid input";
    }

    std::cout << "**************************************\n";

    return 0;
 }