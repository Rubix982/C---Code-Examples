#include <iostream>
#include <string>
#include <sstream>

int main(void) {
    std::stringstream Str;
    std::string Temp;

    Str << "Hello," << " World!";

    while ( std::getline(Str, Temp, ' ') ) {
        std::cout << Temp << std::endl;
    }
}