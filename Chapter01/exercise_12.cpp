// The following for loops sums the integers from -100 to 100. The final value
// of sum is 0.
#include <iostream>

int main()
{
  int sum = 0;
  // sum values from 1 to 10 inclusive
  for (int i = -100; i <= 100; ++i){
    sum += i; //equivalent to sum = sum + val
  }
  std::cout << "Sum of -100 to 100 inclusive is " << sum << std::endl;
  return 0;
}
