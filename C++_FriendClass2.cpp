#include <iostream>

class B;
class A;

int main()
{
    A a;
    B x;
    a.showB(x);
}

class A
{
  public:
    void showB(B &);
};

class B
{
  private:
    int b;

  public:
    B()
        : b(0) {}

    friend void A::showB(B &x); // friend funciton
};

void A::showB(B &x)
{
    // Since show() is friend of B, it can
    // access private members of B
    std::cout << "B::b = " << x.b;
}