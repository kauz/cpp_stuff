#include <iostream>

const int MAX_BIN_DIGITS = 100;

// n - digits left to generate

void bin_num_gen(int n) {
  static int combination[MAX_BIN_DIGITS];
  static int top = 0;

  if (n == 0) {
    for(int i = 0; i < top; i++)
      std::cout << combination[i];
    std::cout << '\t';
  } else {
    combination[top++] = 0;
    bin_num_gen(n - 1);
    top--;

    combination[top++] = 1;
    bin_num_gen(n - 1);
    top--;
  }

}


int main() {
  int n;
  std::cin >> n;
  bin_num_gen(n);
  return 0;
}
