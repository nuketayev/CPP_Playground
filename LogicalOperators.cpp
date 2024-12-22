 #include <iostream>

 int main()
 {
    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 20 && temp < 29)
        std::cout << "It is warm outside!\n";
    else if (temp < -30 || temp > 40)
        std::cout << "Do not go outside!\n";
    else if (temp != 33)
        std::cout << "It is not 33 degrees\n";
    else
        std::cout << "It's 33 degrees\n";
    return 0;
 }