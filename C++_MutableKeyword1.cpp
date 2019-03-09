#include <iostream>

class Test {
    public:
        int x;
        mutable int y;

        Test() {
            x = 4;
            y = 10;
        }
};

int main() {
    const Test t1;
    std::cout << t1.x;
    return EXIT_SUCCESS;
}