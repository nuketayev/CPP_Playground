#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first;

    // int x = 0;

    std::cout << x << std::endl;
    std::cout << second::x;

    return 0;
}