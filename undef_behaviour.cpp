#include <iostream>

int main() {
  int x = 2;
  int A[10];
  int y = 256;

  A[10] = 1;
  std::cout << x << ' ' << y << '\n';
  std::cout << &A[10] << ' ' << &y << '\n';
  for (y = 0; y <= 100; y++) {
    A[y] = (y + 1) % 5;
    std::cout << A[y] << '\n';
  }
  return 0;
}
