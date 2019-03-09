#include <iostream>
#include <sstream>
#include <iterator>

class Animal {
    public:
        Animal() {}
        Animal(const Animal& other) {}
        ~Animal() {}
        std::string name;
};

int main() {

    Animal spot = Animal();
    spot.name = "Spot";

    return 0; 
}