// PART 1: Exercise 1.9 using for loop.
/*
#include <iostream>

int main()
{
  int sum = 0;
  for (int currVal = 50; currVal <= 100; ++currVal){
    sum += currVal;
  }
  std::cout << "The sum from 50 to 100 is " << sum << std::endl;
  return 0;
}
*/
// PART 2: Exercise 1.10 using for loop

#include <iostream>

int main()
{
  for (int currVal = 10; currVal >= 0; --currVal){
    std::cout << "The currrent Value is " << currVal << std::endl;
  }
  return 0; 
}
