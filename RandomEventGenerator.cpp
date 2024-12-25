 #include <iostream>
 #include <ctime>

 int main()
 {
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum)
    {
        case 1:
            std::cout << "Spawn enemy N1\n";
            break;
        case 2:
            std::cout << "Spawn enemy N2\n";
            break;
        case 3:
            std::cout << "Spawn enemy N3\n";
            break;
        case 4:
            std::cout << "Spawn enemy N4\n";
            break;
        case 5:
            std::cout << "Spawn enemy N5\n";
            break;

    }
    return 0;
 }