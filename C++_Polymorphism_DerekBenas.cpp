#include <string>
#include <iostream>
#include <cstdlib>

struct Shape {
    double length, width;

    Shape(double l =  1.0, double w = 1.0) {
        length = l;
        width = w;
    }

    double Area() {
        return length * width;
    }
    private:
        int id;
};

struct Circle : Shape {
    Circle(double width ) {
        this->width = width;
    }

    double Area() {
        return 3.14159 * std::pow((width/2), 2); 
    }
};

int main() {

    Shape shape(10, 10);
    std::cout << "Square Area:" << shape.Area <<"\n";
    Circle circle(10);
    std::cout << "Circle Area: " << circle.Area() << "\n";
    Shape rectangle{10, 15};

    return 0;
}