/* A virutal function a memer function whihvc is declared withni base class and is-defined (overriden) by derived class 
Virutal functions ensure that the correct funciton is called for an objet, regardless of the type of reference ( or pointer) used
for function call
They are mainly used to achieve Runtime Polymorphism
Funcitons are decalrd with a virtual keword in base class
The resolving of function call is done at Run-Time */

/*  Properties of virtual references
i): Force the child class to redefine a function using pure virtual function, not necessary for the partial abstract function.
ii): Is called with a pointer reference, rather than an object reference.
iii): Must be declared in the public, protected section.
iv): Cannot be friend or static.
v): Must have same prototype.
vi): Always declared in the base class, never in the derived class
vii): Virtual destructors, not virtual constructors, can exist */

#include <iostream>

class Base {
public:
    virtual void print() { std::cout << "Print base class" << std::endl; }
    void show() { std::cout << "Show base class" << std::endl; }
};

class Derived : public Base {
public:
    void print() { std::cout << "Print derived class" << std::endl; }
    void show() { std::cout << "Show derived class" << std::endl; }
};

int main(void) {
    Base *bptr;
    Derived d;
    bptr = &d;

    // Virtual functoin, binded at runtime
    bptr->print();

    // Non-virutal function, binded at compile time
    bptr->show();

    std::cout << "\n--------------------\n\n";

    Derived * dptr;
    Base b;

    // DO NOT perform upcasting ( from child to base )
    // using dynamic_cast<> over here gives an error as well. static_cast and dynamic_cast are C++ style
    // while (Derived *) is C-Style
    // dptr = static_cast<Derived *>(b);
    // To make the above work, change it to
    dptr = (Derived *)(&b);
    // However, don't. This is a dangerous practice and should be used with precaution       
    dptr->print();
    dptr->show();

    return 0;
} 