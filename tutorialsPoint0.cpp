#include <iostream>
using namespace std;

class Box
{
  public:
    // Constructor definition
    static int objectCount;
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
        : length(l), breadth(b), height(h)
    {
        cout << "Constructor called: " << endl;

        objectCount++;
    }

  private:
    double length, breadth, height;
} ;

int main() {
    Box box1( 3.3, 1.2, 1.5 ), Box2( 8.5, 6.0, 2.0 ); // declare box1, box2

    // Print total number of objects
    cout << "Total objects: " << endl;
}