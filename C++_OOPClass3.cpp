#include <iostream>

class A {
    int X, Y;

    A(void) 
        :   X(1), Y(2) {}

    ~A() {}

    A(const A & obj)
        :   X(obj.X), Y(obj.Y) {}

    A(const A && obj)
        :   X(obj.X), Y(obj.Y) {}
        
    A operator=(const A && obj) {
        X = obj.X; Y = obj.Y;
        return *this;
    }
};

int main(void) {

}