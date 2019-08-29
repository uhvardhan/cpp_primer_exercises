/* The following program is NOT legal:
* std::cout << "The sum of " << v1;
*           << " and " << v2;
*           << " is " << v1 * v2 << std::endl;
* REASON: We use the output operator (<< operator) in the above case. This
* operator returns its left-hand operand which is not written and therefore we
* cannot chain together output requests.
*/
// The CORRECT way to write the above program is as below:

#include <iostream>

int main()
{
  std::cout << "Enter two numbers " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1;
  std::cout << " and " << v2;
  std::cout << " is " << v1 + v2 << std::endl;
  return 0;
}
