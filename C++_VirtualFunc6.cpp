#include <iostream>

struct A {
    virtual void Func1(void) const { std::cout << "In Class A\n"; }
};

struct B : public A {
    void Func1(void) const { std::cout << "In Class B\n"; }
};

int main(void) {

    A * AObject = new B();
    AObject->Func1();  
    
    B * BObject = new B();
    BObject->Func1();

    
    return 0;
}