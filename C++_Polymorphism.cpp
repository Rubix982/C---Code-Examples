#include <iostream>

class Shape {
protected:
    int Length, Width;

    void Show(void) const {
        std::cout << "Length: " << Length << "Width: " << Width;
    }
};

class Rectange : public Shape {
public:
    Rectange(int X, int Y)
        : Shape(X, Y) {}

    void ShowPerimeter(void) const {
        std::cout << "Perimeter: " << Length*2 + Width*2 << std::endl;
    }

};

class Circle : public Shape {


};

class Triangle : public Shape {

};

int main(void) {
    Shape * Ptr[3];
    Ptr[0] = new Rectangle(5, 6);
    Ptr[1] = new Cirlce(10);
    Ptr[2] = new Triangle(7, 2);

    

}