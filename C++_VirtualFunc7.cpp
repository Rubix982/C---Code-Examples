#include <iostream>

class A {
public:
    void func1(void) { std::cout << "In func1() A.\n"; }
    virtual void func2(void) { std::cout << "In func2() A.\n"; }
    virtual void func3(void) { std::cout << "In func3() A.\n"; }
    virtual void func4(void) { std::cout << "In func4() A.\n"; }
};

class B : public A {
public:
    void func1(void) { std::cout << "In func1() B.\n"; }
    void func2(void) { std::cout << "In func2() B.\n"; }
    void func4(int) { std::cout << "In func4() B.\n"; }
};

int main(void) {
    A * ptr = new B();

    ptr->func1();
    ptr->func2();
    ptr->func3();
    ptr->func4();

    return 0;
}