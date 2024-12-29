#include <iostream>
template <typename T, typename U>


auto max(T x, U y)
{
   return (x > y) ? x : y;
}


int main()
{
   std::cout << max(2.0, 3.1) << '\n';

   return 0;
}