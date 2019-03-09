#include <iostream>

class A;
class B;
int add(A, B);

int main()
{
    A objectA;
    B objectB;
    std::cout << "Sum: " << add(objectA, objectB);
}

int add(A objectA, B objectB)
{
    return objectA.numA + objectB.numB;
}

class A
{
  private:
    int numA;

  public:
    A() : numA(12) {}
    friend int add(A, B);
};

class B
{
  private:
    int numB;

  public:
    B() : numB(1) {}
    friend int add(A, B);
};