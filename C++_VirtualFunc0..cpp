#include <iostream>

class Base { // Abstract base class
    public:
        const char* sayHi() {
            return "Hi"; // A Normal non-virtual function
        }
        virtual const char* getName() {
            return "Base"; // A normal virutal function
        }

        virtual int getValue() = 0; // A pure irtual function1

        int doSomething() = 0; // Compiler error: Cannot set
                               // non-virtual functions to 0
};

int main() {
    Base base;

    return 0;
}