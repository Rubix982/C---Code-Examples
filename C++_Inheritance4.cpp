#include <iostream>

class Person
{
    // Date members of person
  public:
    Person(int x = 1) { std::cout << "Person::Person(int) called " << std::endl; }
};

class Faculty : public virtual Person
{
    // date members of faculty
  public:
    Faculty(int x) : Person(x)
    {
        std::cout << "Faculty::Faculty(int) called " << std::endl;
    }
};

class Student : public virtual Person
{
    // data members of student
  public:
    Student(int x) : Person(x)
    {
        std::cout << "Student::Student(int) called " << std::endl;
    }
};

class TA : public Faculty, public Student
{
  public:
    TA(int x) : Student(x),Faculty(x)
    {
        std::cout << "TA::TA(int)" << std::endl;
    }
};

int main()
{
    TA ta1(30);
}

/* Output generated:
Person::Person(int ) called
Faculty::Faculty(int ) called
Person::Person(int ) called
Student::Student(int ) called
TA::TA(int ) called
*/