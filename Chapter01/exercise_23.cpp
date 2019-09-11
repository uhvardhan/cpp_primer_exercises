#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item originalItem, currItem;
  if (std::cin >> originalItem)
  {
    int cnt = 1;
    while (std::cin >> currItem)
    {
      if (originalItem.isbn() == currItem.isbn())
      {
        ++cnt;
      }
      else
      {
        std::cout << originalItem.isbn() << " occurs " << cnt << " times" << std::endl;
        originalItem = currItem;
        cnt = 1;
      }
    }
    std::cout << originalItem.isbn() << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
