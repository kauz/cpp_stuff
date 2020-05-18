#include <iostream>

/**
* param i: start pin number
* param k: final pin number
* param n: number of diks
*/

void hanoi(int i, int k, int n) {
  if (n == 1) {
    std::cout << "Move disk 1 from pin " << i <<  " to " << k << "\n";
  } else {
    int tmp = 6 - i - k; // third pin
    hanoi(i, tmp, n - 1);
    std::cout << "Move disk " << n <<  " from pin " << i <<  " to " << k << "\n";

    hanoi(tmp, k, n - 1);
    // std::cout << "Move disk " << n <<  " from pin " << i <<  "to " << k << "\n";
  }
}


int main() {
  hanoi(1, 2, 4);

  return 0;
}
