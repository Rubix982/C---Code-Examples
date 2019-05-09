#include <iostream>

int x = 5;

int main(void) {
    int x = 10;

    std::cout << "Global X: " << ::x << " X: " << x << std::endl;

    return 0;
}