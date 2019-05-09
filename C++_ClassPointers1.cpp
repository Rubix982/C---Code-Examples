#include <iostream>

class Base {
public:
    virtual void Print();
};

void ( Base::*bfnPrint)() = &Base::Print;
void Base::Print() {
    std::cout << "Print function for class Base\n";
}

class Derived : public Base {
public:
    void Print();   // Print is still a virtual function
}

void Derived::Print() {
    std::cout << "Print function for class Derived\n";
}

int main(void) {
    Base    *bPtr;
    base    bObject;
    Derived dObject;
    bPtr =  &bObject;    // Set pointer to address of bObject
    (bPtr->*bfnPrint)();
    bPtr =  &dObject;    // Set pointer to address of dObject
    (bPtr->*bfnPrint)();
}
