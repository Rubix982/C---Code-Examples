// deriv_VirtualFunctions2.cpp 
// compile with: /EHsc 
#include <iostream> 
using namespace std;

class Base
{
  public:
    virtual void NameOf();
    void InvokingClass();
};
// Implement the two functions. 
void Base::NameOf() { cout << "Base::NameOf\n"; }

void Base::InvokingClass() { cout << "Invoked by Base\n"; }

class Derived : public Base
{
  public:
    void NameOf();
    void InvokingClass();
};
// Implement the two functions. 
void Derived::NameOf() { cout << "Derived::NameOf\n";}

void Derived::InvokingClass() { cout << "Invoked by Derived\n"; }

int main()
{ 
    // Declare an object of type Derived. 
    Derived aDerived;
    // Declare two pointers, one of type Derived * and the other 
    // of type Base *, and initialize them to point to aDerived. 
    Derived *pDerived = &aDerived; 
    Base *pBase = &aDerived;
    
    // Call the functions.
    pBase->NameOf();            // Call virtual function.
    pBase->InvokingClass();     // Call nonvirtual function.
    pDerived->NameOf();         // Virtual function.
    pDerived->InvokingClass();  // Call nonvirtual function.
}