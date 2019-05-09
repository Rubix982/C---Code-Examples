#include <chrono>
#include <iostream>

static const long long numInt = 100000000;

int main(void) {
    auto start= std::chrono::system_clock::now();

    for ( long long i = 0; i < numInt ; ++i ) {
        int * temp(new int(i));
        delete temp;
    }

    std::chrono::duration<double> Duration = std::chrono::system_clock::now() - start;
    std::cout << "Time native: " << Duration.count() << " seconds" << std::endl;
}