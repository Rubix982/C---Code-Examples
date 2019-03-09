#include <iostream>

class Vehicle {
    public:
        Vehicle() {
            std::cout << "This is a vehicle" << std::endl;
        }
};

// sub class derived from two base classes
class Car : public Vehicle {

};

// main function
{
    // Creating object of sub class will
    // invoke the constructor of bas classes
    Car obj;
    return 0;
}