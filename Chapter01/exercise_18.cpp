#include <iostream>

int main() {
  //currval is the number we're couting; we'll read new values in val
  int currval = 0, val = 0;
  // read furst number and ensure we have data to process
  if (std::cin >> currval) {
    int cnt = 1; //store the count for the curretn value we're processing
    while (std::cin >> val) { // read the remaining numbers
      if (val == currval) { // if the values are the same
        ++cnt; // add 1 to cnt
      }
      else { // otherwise, print the count for the previous value
        std::cout << currval << " occurs " << cnt << " times." << std::endl;
        currval = val; //remember the new value
        cnt = 1; // reset the counter
      }
    } //while loop ends here
    // remember to print the count for the last value in the file.
    std::cout << currval << " occurs " << cnt << " times." << std::endl;
  }
  return 0;
}

// If given only equal values as input - the program will continue running till
// end-of-file

// If no number is repeated - then the 2nd if loop is always false and else loop
//runs and outputs the count which is 1. 
