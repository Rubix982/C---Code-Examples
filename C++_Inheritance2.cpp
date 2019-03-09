#include <iostream>

class Vehicle {
    public:
        Vehicle() {
            std::cout << "This is a vehicle " << std::endl;
        }
};

// Second base class
class FourWheeler {
    public:
        FourWheeler () {
            std::cout << "This is a 4 wheeler vehicle " << std::endl;
        }
};

class Car : public Vehicle, public FourWheeler {

};

// main function
int main() {
    // Crearing object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}