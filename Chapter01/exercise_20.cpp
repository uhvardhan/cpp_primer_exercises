#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item;
  //read ISBN, number of copies sold and sales price
  while (std::cin >> item){
    // write ISBN, number of copies sold, total revenue and average price
    std::cout << item << std::endl;
  }
  return 0;
}
