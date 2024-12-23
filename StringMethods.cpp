 #include <iostream>
 
//www.cplusplus.com/reference/string/string/

 int main()
 {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.empty())
    {
        std::cout << "You didn't enter your name\n";
        return 0;
    }

    if(name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters long\n";
    }
    else
    {
        std::cout << "Welcome " << name << "\n";
    }

    std::cout << "Your username is now " << name.append("@gmail.com") << "\n";

    std::cout << "The first character of your name is: " << name.at(0) << "\n";
    
    std::cout << "Nickname is: " << name.insert(0, "@") << "\n";

    // name.find(' ') will find position of the first space

    name.erase(0,3); //eliminate the first three characters

    std::cout << "Without the first three characters: " << name << "\n";

    name.clear();
    std::cout << "Goodbye!" << name << "\n";

    return 0;
 }