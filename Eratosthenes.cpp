#include <iostream>

int main() {
  int n;
  std::cin >> n;

  bool sieve[n+1]; // not to interpret 0 and 1 elements - not prime nor composite
  for (int i = 2; i < n + 1; i++) {
    sieve[i] = true;
  }

  int x = 2;
  while (x*x <= n) {
    if (sieve[x]) { // found new prime number
      for (int y = x*x; y <= n; y += x) {
        sieve[y] = false; // composite
      }
    }
    x+= 1;
  }

  for (int i = 2; i < n + 1; i++) {
    if (sieve[i]) {
      std::cout << i << '\t';
    }
  }

  std::cout << '\n';
  return 0;
}
