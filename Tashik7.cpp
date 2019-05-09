#include <iostream>

using namespace std;

class A{
private:
    int Ax, Ay;
public:
    void xyz(B &);
};

class B {
private:
  int Bx, By;
public:
    
    void Get() const {
        std::cout << "Bx: " <<  Bx << std::endl;
        std::cout << "By: " << By << std::endl;
    }

    B():
        Bx(0), By(0) {}
    friend void xyz(B &);
};

void xyz(B & SomeObj) {
     SomeObj.Bx=10;
    SomeObj.By=15;
}


int main(){
    B obj;
    A a;
    a.xyz(obj);
}