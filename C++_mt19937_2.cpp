#include <iostream>
#include <random>
#include <chrono>

int main(void) {
    auto seed = std::chrono::high_resolution_clock().now().time_since_epoch().count();
    std::mt19937 generator{seed};
    std::uniform_real_distribution<double> Distribution(0, 10);

    // Generate ten random numbers in [1, 6] 
    for ( size_t  i = 0; i < 10 ; ++i) 
        std::cout << Distribution(generator) << ' ';
    std::cout << std::endl;

    std::cin.get();

    return 0;
}