#include <iostream>

int main(void) {

    int a = 5;
    float b = 2;

    std::cout << sizeof(a++ + b);
    std::cout << a;
    
    return 0;
}