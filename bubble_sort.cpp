#include <iostream>

int main() {
  int N = 5;
  int A[N] = {5, 1, 3, 2, 4};

  bool isSorted = false;

while (not isSorted) {
  int i = 0;
  isSorted = true;
  while (i < N-1) {
    if (A[i] > A[i+1]) {
      int tmp = A[i];
      A[i] = A[i+1];
      A[i+1] = tmp;
      isSorted = false;
    }
    i++;
  }
}

  for (int i = 0; i < N; ++i) {
    std::cout << A[i] << '\t';
  }

  std::cout << '\n';

  return 0;
}
