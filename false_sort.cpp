#include <iostream>

int main() {
  int N = 5;
  int A[N] = {1, 7, 3, 5, 4};

  bool isSorted = true;

  for (int i = 0; i < N - 1; ++i) {
    if (A[i] > A[i+1]) {
      int tmp = A[i];
      A[i] = A[i+1];
      A[i+1] = tmp;
    }
  }


  for (int i = 0; i < N; ++i) {
    std::cout << A[i] << '\t';
  }

  std::cout << '\n';

  return 0;
}
