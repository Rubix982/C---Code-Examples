#include <iostream>

class Base {
public:
    virtual void func ( int x = 0 ) { std::cout << "Base::func(), x = " << x << std::endl; }
};

class Derived : public Base {
public:
    virtual void func ( int x ) { std::cout << "Derived::func(), x = " << x << std::endl; }
};

int main(void) {
    Base * ptr = new Derived();
    ptr->func();

    return 0;
}