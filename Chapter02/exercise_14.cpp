#include <iostream>

int main()
{
  int i = 100, sum = 0;
  for (int i = 0; i != 10; ++i)
  {
    sum += i; // sums to 45
  }
  std::cout << i << " " << sum << std::endl; //global scope of i means 100 is printed
  return 0;
}
