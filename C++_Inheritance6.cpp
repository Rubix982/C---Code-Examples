#include <string>
#include <iostream>

class Animal
{
  protected:
    std::string m_name;

    Animal(std::string name)
        : m_name(name)
    {
    }

  public:
    std::string Getname() { return m_name; }
    virtual const char *speak() { return "???"; }
};

class Cat : public Animal
{
  public:
    Cat(std::string name)
        : Animal(name)
    {
    }

    virtual const char *speak() { return "Meow"; }
};

class dog : public Animal
{
  public:
    dog(std::string name)
        : Animal(name)
    {
    }

    virtual const char *speak() { return "Woof"; }
};

class Cow : public Animal
{
    public:
        Cow(std::string name)
            :   Animal(name)
        {
        }
};

int main() {
    Cow cow("Betsy");
    std::cout << cow.Getname() << " says " << cow.speak() << '\n';
}