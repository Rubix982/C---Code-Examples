#include <iostream>

int main(void) {
    const int a = 10;
    int *const p = const_cast<int *>(&a);
    *p = 20;

    std::cout << *p << "   " << a;
}