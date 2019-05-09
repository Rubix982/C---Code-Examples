#include <iostream>
#include <algorithm>
#include <vector>

int main(void) {
    std::vector<int> numbers { 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
    std::for_each(numbers.begin(), numbers.end(), [] (int y) {
        std::cout << y << std::endl;
    });
}