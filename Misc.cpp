#include <iostream>

class A {
public:
    A(int b) {
        std::cout << 20000;
    }

    A() {
        std::cout << 1 ;
    }
};

int main(void) {
    A B();
}