#include <iostream>
#include <exception>

int main() {
    try {
        int* myarray = new int[1000];
    }
    catch(std::exception& e) {
        std::cout << "Standard exception: " << e.what() << std::endl;
    }
}