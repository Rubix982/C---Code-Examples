#include <iostream>
#include <random>
#include <chrono>
#include <functional>

int main(void) {
    auto seed = std::chrono::high_resolution_clock().now().time_since_epoch().count();
    std::mt19937 mt_rand(seed);
    std::uniform_int_distribution<int> Distribution(1, 6);

    for(int i = 0; i < 10 ; ++i) {
        std::cout << Distribution(mt_rand) << std::endl;
    }
    std::cout << std::endl;
}