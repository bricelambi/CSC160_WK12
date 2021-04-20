
#include <string>
#include <iostream>

using namespace::std;

//Base class
class Person {
  public:

    string name;
    string prefix;

    Person(string name, string prefix) {
      this->name = name;
      this->prefix = prefix;
    }

    string getTitle() {
      return prefix + name;
    }
};

//Derived or extends from Person
class Student : public Person {
  public:
    int grade;
    Student(string name, int grade):Person(name, "Student ") {
      this->grade = grade;
    }
};

//Derived from Person
class Teacher : public Person {
  public:
    int salary;

    Teacher(string name, int salary):Person(name, "Prof ") {
      this->salary = salary;
    }
};

class Secretary : public Person {
  public:
    Secretary(string name):Person(name, "Sec ") {
    }
};


int main() {

  Student s("Jerry", 10);
  Teacher t("Bob",40);
  Secretary sec("John");

  cout << s.getTitle() << endl;
  cout << t.getTitle() << endl;
  cout << sec.getTitle() << endl;
}