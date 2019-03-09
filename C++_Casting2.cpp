#include <iostream>

int main(void) {
    int a1 = 40;
    const int* b1 = &a1;

    // A const_cast can only adjust type qualifiers; 
    // it cannot change the underlying type
    char* c1 = const_cast<char *>(b1);

}