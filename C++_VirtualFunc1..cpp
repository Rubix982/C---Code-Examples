#include <string>

class Animal
{
  protected:
    std::string m_name;

    // We're making this constructor protected because
    // we don't want people creating animal objects directly
    // but we still want derived calssesto be able to use it
    Animal(std::string name)
        : m_name(name)
    {
    }

  public:
    std::string getName() { return m_name; }
    virtual const char *speak() = 0;  // Note that speak is now
                                      // a pure virtual function
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

class Dog : public Animal
{
  public:
    Dog(std::string name)
        : Animal(name)
    {
    }

    virtual const char *speak() { return "Woof"; }
};

class Cow : public Animal {
    public:
        Cow ( std::string name )
            : Animal(name)
        {
        }

        virtual const char* speak() { return "Moo"; }
};

int main() {

}