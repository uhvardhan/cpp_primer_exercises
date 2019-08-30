#include <iostream>

int main()
{
  int sum = 0, currVal = 50;
  while(currVal <= 100){
    sum += currVal;
    ++currVal;
  }
  std::cout << "The sum from 50 to 100 is " << sum << std::endl;
  return 0;
}
