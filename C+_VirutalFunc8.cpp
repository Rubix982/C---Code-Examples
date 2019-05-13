#include <iostream>

class Base {
public:
    virtual void print() { std::cout << "Base class print function.\n"; }
    void Invoke() { 
        std::cout << "Base class invoke function.\n";
        this->print();
    }
};

class Child : public Base {
public:
    void print() { std::cout << "Derived class print function\n"; }
    void Invoke() { 
        std::cout << "Derived class invoke function.\n"; 
        this->print();
    }
};

int main(void) {

    Base * b = new Child();
    b->Invoke();
    
    return 0;
}