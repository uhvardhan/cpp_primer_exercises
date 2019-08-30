#include <iostream>

int main()
{
  int int1 = 0, int2 = 0;
  std::cout << "Enter two integers: " << std::endl;
  std::cin >> int1 >> int2;
  while(int1 <= int2){
    std::cout << "The currrent Value is " << int1 << std::endl;
    ++int1;
  }
  return 0;
}
