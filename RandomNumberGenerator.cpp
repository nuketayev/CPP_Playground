 #include <iostream>
 #include <ctime>

// pseudo-random = Not truly random ( But close )

 int main()
 {
    srand(time(NULL));

    int num = (rand() % 2);

    std::cout << num << '\n';

    return 0; 



 }