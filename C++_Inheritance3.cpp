#include <iostream>

class A {
    public:
        A() { std::cout << "A's constructor called "<< std::endl; }
};

class B {
    public:
        B() { std::cout << "B's constructor called "<< std::endl; }
};

class C : public B, public A // Note the order 
{
    public:
        C() { 
            std::cout << "C's contructor called "<< std::endl; 
        }
};

int main() {
    C c;
    return 0;
}