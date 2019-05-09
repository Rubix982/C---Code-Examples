#include <iostream>

class A
{
private:
    int X, Y, Z;
public:
    A() :   X(1), Y(1), Z(1) { std::cout << "Constructor called!" << std::endl; }
    ~A() { std::cout << "Destructor called!" << std::endl; }

    void Print(void) {
        std::cout << X << "   " << Y << "   " << Z << std::endl;
    }

};

int main(void) {
    A a;

    delete &a;

    a.Print();

}