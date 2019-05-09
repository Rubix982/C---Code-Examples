#include <iostream>
#include <typeinfo>

void func(int a) {}
int func2(int a) { int b = a; return 0; }
float func3(int a) { return a*2; }
bool func4(int a, int * c ) { *c = a; return 0; }

int main(void) {

    std::cout << typeid(func).name() << " ";
    std::cout << typeid(func2).name() << " ";
    std::cout << typeid(func3).name() << " ";
    std::cout << typeid(func4).name() << " ";

    return 0;
}
