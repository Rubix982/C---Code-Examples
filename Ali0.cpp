#include <iostream>
#include <random>
#include <string>
#include <sstream>
#include <chrono>

class Ali0
{
private:
    std::string RandString;
    double Rand[10];
public:
    Ali0() {}
    ~Ali0() {}

    void SetRandString() { 
        auto device = std::chrono::high_resolution_clock().now().time_since_epoch().count();
        std::mt19937 generator{device};
        std::uniform_real_distribution<double> Distribution(0, 1);

        std::stringstream newStream;

        // Generate ten random numbers in [1, 0]
        for ( size_t i = 0; i < 10 ; ++i ) 
            newStream << Distribution(generator) << "   ";
        
            RandString = newStream;


    }
};