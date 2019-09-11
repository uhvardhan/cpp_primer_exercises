#include <iostream>

int main()
{
  int currVal = 10;
  while(currVal >= 1){
    std::cout << "The currrent Value is " << currVal << std::endl;
    --currVal;
  }
  return 0;
}
