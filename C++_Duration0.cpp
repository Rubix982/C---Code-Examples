#include <iostream>
#include <chrono>

int main(void) {
    const auto begin = std::chrono::high_resolution_clock::now();
    
    for ( int i = 0 ; i < 1000000 ; ++i ) ;
    
    auto time = std::chrono::high_resolution_clock::now() - begin;
    
    std::cout << "\nTime Elapsed is: " << std::chrono::duration<double, std::milli>(time).count() << '\n';
}