#include <stdio.h>

class B {
public:
    void f(char) {
        printf_s("In B::f()\n");
    }

    void g(char) {
        printf_s("In B::g()\n");
    }
};

class C {
public:
    int g();
}

class D2  public B {
public:
    using B::f;     // OK: B is a base of D2
    // using C::g;  // ERROR: C isn't a base class of D2
};

int main(void) {
    D2 MyD2;
    MyD2.f('a');
}