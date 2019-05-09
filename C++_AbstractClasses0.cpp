#include <iostream>

class Parent {
public:
    virtual void setData(void) = 0;
    void getData(void) {}
};

class Child : public Parent {

};

int main(void)  {
    Parent * newParent;
}