#include <iostream>

void talk()
{
    std::cout << "I can talk." << std::endl;
}

void walk()
{
    std::cout << "I can walk." << std::endl;
}

class Person
{
  public:
    std::string profession;
    int age;

    Person() : profession("unemployed"), age(16) {}
    void display()
    {
        std::cout << "My profession is: " << profession << std::endl;
        std::cout << "My age is: " << age << std::endl;
        walk();
        talk();
    }
};

class MathsTeacher : public Person
{
  public:
    void teachMaths()
    {
        std::cout << "I can teach Maths." << std::endl;
    }
};

class Footballer : public Person
{
  public:
    void playFootball()
    {
        std::cout << "I can play football." << std::endl;
    }
};

int main()
{
    MathsTeacher teacher;
    teacher.profession = "Teacher";
    teacher.age = 23;
    teacher.display();
    teacher.teachMaths();

    Footballer footballer;
    footballer.profession = "Footballer";
    footballer.age = 23;
    footballer.display();
    footballer.playFootball();
}