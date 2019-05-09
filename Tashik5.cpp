#include <iostream>

class B;

class A{
public:
    void xyz(B & BClasObject);
};

class B
{
  private:
    int B1, B2, B3, B4;

  public:
    friend void A::xyz(B &BClassObject);
};

void A::xyz(B &BClassObject)
{
    std::cout << "Hello, World!"
              << "B1: " << BClassObject.B1 << "B2: " << BClassObject.B2 << "B3: " << BClassObject.B3 << "B4: " << BClassObject.B4 << std::endl;
}

int main(void) {


}