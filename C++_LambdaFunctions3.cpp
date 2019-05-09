#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

void printfunc(int y) {
    std::cout << y << " ";
}

void run_within_for_each(std::function<void (int)> func) {
    std::vector<int> numbers{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::for_each(numbers.begin(), numbers.end(), printfunc);
}

int main(void ) {
    auto func1 = [](int y) {
        std::cout << y << " ";
    };

    auto func2 = [](int y) {
        std::cout << y * 2 << " ";
    };

    run_within_for_each(func1);
    std::cout << std::endl;
    run_within_for_each(func2);
    std::cout << std::endl;
}