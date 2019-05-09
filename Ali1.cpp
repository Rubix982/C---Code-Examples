#include <iostream>

class A{
public:
    int a;
    int b;

    A(int A, int B)
        : a(A), b(B) {}

    void PrintValues(void) const {
        std::cout << a << "   " << b << std::endl;
    }
};

int main(void) {
    A secondA(10, 20);
    secondA.PrintValues();

    std::cin.get();
}

