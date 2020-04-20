#include <iostream>

struct t_Pair {
  int a;
  int b;
};

t_Pair returnPair(int x) {
  t_Pair result;

  result.a = x*x;
  result.b = x*x*x;
  return result;
}

int main() {
  int x;
   std::cin >> x;

  t_Pair pair_ = returnPair(x);
  std::cout << pair_.a << ' ' << pair_.b << '\n';

   return 0;
}
