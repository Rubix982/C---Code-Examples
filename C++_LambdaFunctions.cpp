#include <iostream>

int main(void) {
    auto sum = [](int x, int y) -> int { return x + y};
    std::cout << sum(5, 2) << std::endl;
    std::cout << sum(10, 5) << std::endl;
}