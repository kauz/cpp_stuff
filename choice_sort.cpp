#include <iostream>

int main() {
  int N = 5;
  int A[N] = {5, 1, 3, 2, 4};

  for (int pos = 0; pos < N - 1; pos++) {
    for (int i = pos + 1; i < N; i++) {
      if (A[i] < A[pos]) {
        int tmp = A[i];
        A[i] = A[pos];
        A[pos] = tmp;
      }
    }
  }

  for (int i = 0; i < N; ++i) {
    std::cout << A[i] << '\t';
  }

  std::cout << '\n';

  return 0;
}
