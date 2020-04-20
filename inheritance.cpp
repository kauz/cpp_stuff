#include <cstdio>
#include <string>

class Person {
protected:
  int age;
  std::string name;
public:
  Person(int age, std::string name) {
    this->age = age;
    this->name = name;
  }
  virtual void introduce() const = 0;
};

class Teacher : public Person {
  public:
    Teacher(int age, std::string name) : Person(age, name) {
    }
    void introduce() const {
      printf("Hello, I'm %s! I'm %d years old.\n", this->name.c_str(), this->age);
    }
};

class Student : public Person {
  public:
    Student(int age, std::string name) : Person(age, name) {
    }
  void introduce() const {
    printf("Hi, I'm %s! I'm %d years old.\n", this->name.c_str(), this->age);
  }
};

int main() {
  Student a(18, "John");
  Teacher b(40, "Steve");
  Student c(20, "Petya");

  Person *people[3] = {&a, &b, &c};
  for (int i = 0; i < 3; i++) {
      people[i]->introduce();
  }
  return 0;
}
