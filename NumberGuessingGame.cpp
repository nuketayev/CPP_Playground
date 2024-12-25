#include <iostream>
#include <ctime>

 int main()
 {
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1;
    tries = 0;
	std::cout << num << '\n';

    do
    {
        std::cout << "Guess a number 1-100: ";
        std::cin >> guess;
        tries++;
		if (guess < num)
			std::cout << "Too low!\n";
		else if (guess > num)
			std::cout << "Too high\n";
    } while (num != guess);
    
    std::cout << "The random number was: " << num << '\n';
    std::cout << "You have guessed the number!\n";
    if(tries == 1)    
        std::cout << "Upon " << tries << " try\n";
    else
    	std::cout << "Upon " << tries << " tries\n";

    return 0;
 }