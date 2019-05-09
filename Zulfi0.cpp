#include <iostream>
using namespace std;
class Vector
{
    int x, y;

  public:
    Vector(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    void printXY()
    {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
    Vector operator|(const Vector &v2)
    {
        Vector temp;
        temp.x = x + v2.x;
        temp.y = y + v2.y;
        return temp;
    }
    Vector operator+=(Vector &v3)
    {
        this->x += v3.x;
        this->y += v3.y;
        return *this;
    }
};
int main()
{
    Vector v1(10, 15);
    Vector v2(8, 6);
    Vector v3(8, 6);

    Vector v4 = v1 | v2;
    // { 18, 21 }
    v4 += v3;
    // { 18+8=26, 21+7=27}

    v4.printXY();
}
// prints x: 18 & y: 21
//x=28  y=27