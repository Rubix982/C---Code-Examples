#include <iostream>

class Base {
    public:
        Base() { std::cout << "Base contructor called!" << std::endl; }
        virtual ~Base() { std::cout << "Base destructor called!" << std::endl; }
};

class Derived : public Base {
    public:
        Derived() { std::cout << "Derived constructor called!" << std::endl; }
        ~Derived() { std::cout << "Derived destructor called!" << std::endl; }
};

int main(void) 
{
    Base* base = new Base();
    delete base;
 
    std::cout << "-----------------------------------" << std::endl;
 
    Derived* derived = new Derived();
    delete derived;

    std::cout << "-----------------------------------" << std::endl;

    Base* poly = new Derived();
    delete poly;

    std::cin.get();
}