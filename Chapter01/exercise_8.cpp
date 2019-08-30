#include <iostream>

int main()
{
  //Legal
  //std::cout << "/*";

  //Legal
  //std::cout << "*/";

  //Illegal - error: missing terminating " character
  // Solution - std::cout << /* "*/" */";
  //std::cout << /* "*/" */;

  //Illegal - error: missing terminating " character
  //Solution - std::cout << /* "*/" /* ""*/" /**/;
  //std::cout << /* "*/" /* "*/" */;
  return 0;
}
