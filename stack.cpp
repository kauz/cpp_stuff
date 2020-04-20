#include <iostream>

const int MAX_A_SIZE = 100;

int main() {
  int N = MAX_A_SIZE;
  int A[N];
  int top = 0;
  int x;

  std::cin >> x;

  while (x != 0) {
    A[top++] = x;
    //top += 1;
    std::cin >> x;
  }

 while (top > 0) {
    std::cout << A[--top] << '\t';
  }

  std::cout << '\n';

  return 0;
}
