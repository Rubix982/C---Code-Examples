#include <iostream>

class A
{
  private:
    int i;

  public:
    A(int arg)
    {
        i = arg;
        std::cout << "A's Constructor called. Value of i: " << i << std::endl;
    }
};

// Class B is derived from A
class B : public A
{
  public:
    B(int x) : A(x) {
        std::cout << "B's constructor called";
    }
};

int main() {
    B obj1(10);
    return 0;
}