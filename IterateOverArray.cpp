 #include <iostream>

int main()
{
    std::string students[5] = {"John", "Jane", "Sue", "Alex", "Mary"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++)
    {
        std::cout << students[i] << '\n';
    }

    return 0;
}