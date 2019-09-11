#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item total; // variable to hold data for the next transaction
  // read the first transaction and ensure that there are data to process
  if (std::cin >> total)
  {
    Sales_item currItem; // variable to hold the running data
    while (std::cin >> currItem)
    {
      // if we're processing the same book
      if (total.isbn() == currItem.isbn())
      {
        total += currItem; // update the running total
      }
      else
      {
        // print the results of the previous book
        std::cout << total << std::endl;
        // total now refers to the next book
        total = currItem;
      }
    }
    std::cout << total << std::endl; // print the last transaction
  }
  else
  {
    // No input! Warning to the user!!
    std::cerr << "No data received!!" << std::endl;
    return -1; // indicate failure.
  }
  return 0;
}
