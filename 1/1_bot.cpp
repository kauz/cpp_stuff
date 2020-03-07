#include <iostream>

int main() {
  using namespace std;
  string name;
  int age;
  
  cout << "- Hello! What is your name?" << endl;
  cerr << "> ";
  cin >> name;
  cout << "- I'm glad to see you, " << name << "!" << endl
       << "- What is your age?" << endl;
  cerr << "> ";
  cin >> age;
  cout << "- I thought you are " << age - 1
       << " years old. You look younger!" << endl;

  return 0;
}

// ./a.out > out.txt < in.txt 2> err.txt
