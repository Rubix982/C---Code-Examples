#include <iostream>

int main(void) {
    // Compilation error; must be an eligible rvalue
    int const * p = 5;

    std::cout << ++(*p) << std::endl;
}