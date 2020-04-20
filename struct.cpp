#include <cstdio>
#include <cstring>

struct Student {
  int age;
  char name[30];

  static void introduce(const Student *x);
};

void Student::introduce(const Student *x) {
  printf("Hello, I'm %s! I'm %d years old.\n", x->name, x->age);
}

int main() {
  struct Student a;
  a.age = 18;
  strcpy(a.name, "John");
  Student::introduce(&a);
  return 0;
}
