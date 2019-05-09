#include <iostream>
#include <random>
#include <ctime>
#include <functional>

int main(void) {
    std::mt19937::result_type seed = time(0);
    auto dice_rand = std::bind(std::uniform_int_distribution<int>(1,6),
                                std::mt19937(seed));
}