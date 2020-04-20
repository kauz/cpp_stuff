#include <cstdio>
#include <cstring>

class Student {
  int age;
  char name[30];

  public:
    Student(int age, const char *name);
    void introduce() const;
};

Student::Student(int age, const char *name) {
  this->age = 18;
  strcpy(this->name, "John");
}

void Student::introduce() const {
  printf("Hello, I'm %s! I'm %d years old.\n", this->name, this->age);
}

int main() {
  Student a(18, "John");
  a.introduce();
  return 0;
}
