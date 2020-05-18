/*
* factorial really shouldn't be written with recursion
*/

#include <iostream>

uint64_t factorial(uint16_t n) {
  if (n == 0) {
    return 1;
  } else {
    return factorial(n - 1) * n;
  }
}


main() {
  uint16_t x;
  std::cin >> x;
  std::cout << factorial(x) << "\n";

  return 0;
}
