#include <iostream>
using namespace std;

class A{
protected:
    int a;
public:
    A() : a(10) {}  
int show() {
    std::cout << a;
    return 1;
}
};

class B : public A {
protected:
    int a;
    int show() = delete;
public:
    B() :   a(20) {}
    // int show() {
    //     std::cout << a;
    //     return 1;
    // }
};

int main(void) {
    B obj;
    std::cout << sizeof(obj);
}