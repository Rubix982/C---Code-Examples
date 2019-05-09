#include <iostream>

class A
{
  private:
    int x, y;
public:
    A() {}

    A(int tempX, int tempY)
        : x(tempX), y(tempY) {}

    ~A() {}

/*    A operator+(int newInt) {
        this->x += newInt;
        this->y += newInt;

        return *this;
    } */
    friend void operator+(A &newObj, int newInt);
    friend void operator+(int newInt, A &newObj);

        void Show() const
    {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
};

void operator+(A &newObj, int newInt) {
    newObj.x += newInt;
    newObj.y += newInt;
}

void operator+(int newInt, A &newObj)
{
    newObj.x += newInt;
    newObj.y += newInt;
}

int main(void)
{
    A Obj1(5, 5);

    Obj1 + 10;
    10 + Obj1;
    Obj1.Show();

    return 0;
}

// A operator+(int newInt)
// A operator+(A & newObj, int newInt)
// A operator+(int newInt, A & newObj)
// ++Obj1   void operator++(A & newObj)
// Obj1++   void operator++(A & newObj, int)