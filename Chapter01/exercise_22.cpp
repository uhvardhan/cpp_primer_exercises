#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item sum, each_item;
  if (std::cin >> sum){
    while (std::cin >> each_item){
    sum += each_item;
    }
  }
  std::cout << sum << std::endl;
  return 0;
}
