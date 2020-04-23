#include <iostream>

int main() {
  int N = 5;
  int A[N] = {5, 1, 3, 2, 4};

  for (int pos = 1; pos < N; pos++) {
    i = pos;
    while (i > 0 and A[i - 1] > A[i]) {
      int tmp = A[i];
      A[i] = A[i - 1];
      A[i - 1] = tmp;
      i--;
    }
  }

  for (int i = 0; i < N; ++i) {
    std::cout << A[i] << '\t';
  }

  std::cout << '\n';

  return 0;
}
