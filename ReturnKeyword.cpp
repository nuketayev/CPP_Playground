#include <iostream>
#include <cmath>

 int squareroot(int num)
 {
    num = sqrt(num);
    return num;
 }

 int main()
 {
    int num;
    int result;

    std::cout << "Enter a number to find it's square root: ";
    std::cin >> num;
    result = squareroot(num);

    std::cout << "Here is the result: " << result << '\n';
    return 0;
 }