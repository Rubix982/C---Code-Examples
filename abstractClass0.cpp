#include <iostream>
using namespace std;

//Abstract base class
class Base
{
  public:
    virtual void show() = 0; // Pure Virtual Function
};

class Derived : public Base
{
  public:
    void show()
    {
        cout << "Implementation of Virtual Function in Derived class\n";
    }
};

int main()
{
    Base obj; // Compile Time Error
              // cannot declare variable 'obj' to be of abstract type 'Base'
              // becase the following virtual functions are pure within 'Base'
              // virtual void Base::show()
    Base *b;
    Derived d;
    b = &d;
    b->show();
}
