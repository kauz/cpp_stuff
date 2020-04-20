#include <iostream>

int main() {
  int N = 10000;
  int A[N];

//  for (int i = 0; i < N; i++) A[i] = i;
  for (int i = 0; i < N; i++) A[i] = N-i;

  int i = 0;

  while (i < N-1) {
    if (A[i] > A[i+1]) {
      int tmp = A[i];
      A[i] = A[i+1];
      A[i+1] = tmp;
      i = 0;
    } else {
      i++;
    }
  }


  std::cout << 1 << '\n';

  return 0;
}
