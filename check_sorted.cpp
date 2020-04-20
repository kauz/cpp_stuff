#include <iostream>

int main() {
  int N = 5;
  int A[N] = {1, 7, 3, 4, 5};

  bool isSorted = true;

  for (int i = 0; i < N - 1; ++i) {
    if (A[i] > A[i+1]) {
      isSorted = false;
      break;
      }
  }

  std::cout << isSorted << '\n';

  return 0;
}
