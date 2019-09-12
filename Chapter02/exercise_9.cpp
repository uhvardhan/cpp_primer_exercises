#include <iostream>

int main()
{
  // std::cin >> int input_value; // Error: Variable must be defined before using for input
  int input_value;
  std::cin >> input_value;

  // int i = { 3.14 }; // Error: Loss information in list initialization
  double d = { 3.14 };

  // double salary = wage = 9999.99; // Error: Wage has not been defined
  double salary, wage;
  salary = wage = 9999.99;

  int i = 3.14; // OK but value will be truncated

  return 0;
}
