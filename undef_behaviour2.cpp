#include <iostream>


int* foo() {
  int x = 5;
  return &x;
}


int main() {

  int *p = foo();
  std::cout << *p-- << '\n';

  return 0;
}
