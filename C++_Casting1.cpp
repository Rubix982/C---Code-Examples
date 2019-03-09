#include <iostream>

int fun(int *ptr) {
    // *ptr += 10 Undefined behaviour
    return (*ptr + 10);
}

int main(void) {
    const int val = 10;
    const int* ptr1 = &val;
    int* ptr2 = const_cast<int*>(ptr1);
    std::cout << fun(ptr2);
    return 0;
}