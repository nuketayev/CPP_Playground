 #include <iostream>

 // cout << (ensertion operator)
 // cin >> (extraction operator)

 int    main()
 {
    std::string name;
    int age;

    std::cout << "What is your name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old\n";

    return 0;
 }
