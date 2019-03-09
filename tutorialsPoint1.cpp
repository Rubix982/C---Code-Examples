#include <iostream>
using namespace std;

class Box
{
  public:
    static int objectCount;

    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
        : length(l), breadth(b), height(h)
    {
        cout << "Constructor called " << endl;
        objectCount++;
    }

    double Volume() {
        return length*breadth*height;
    }

    static int getCount() {
        return objectCount;
    }

  private:
    double length, breadth, height;
};

int Box::objectCount = 0;

int main() {
    // Print total number of objects before creating object
    cout << "Initial stage count: " << Box::getCount() << endl;

    Box Box1( 3.3, 1.2, 1.5 ), Box2( 8.5, 6.0, 2.0 ); // Decalre box1, box2

    // Print total number of objects after creating object.
    cout << "Final stage count: " << Box::getCount() << endl;
}