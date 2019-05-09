#include <functional>
#include <algorithm>
#include <vector>
#include <iostream>

std::function<bool (int)> create_function() {
    return [](int x) {
        return (x < 100);
    };
}

int main(void) {
    std::vector<int> newVector { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::count_if(newVector.begin(), newVector.end(), create_function);
}