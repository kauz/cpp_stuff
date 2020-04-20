#include <iostream>
#include <unistd.h>


int main() {
  using namespace std;

  int stop = 10;
  int b = 3;
  int a = 6;
  int d = 3;
  for (int x = 1; x < stop; x = (a * x + b) % d) {
      cout << x << '\n';
      sleep(1);
  }

  return 0;
}
