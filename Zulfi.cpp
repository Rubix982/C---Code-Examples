#include <iostream>



class A {
private:
    int a, b, c;
public:
    A() 
    :   a(0), b(0), c(0) {
        std::cout << "Constructor called for A!" << std::endl;        
    }
    A(const A & someObj)
        :   a(someObj.a), b(someObj.b), c(someObj.c)  {}
    ~A(){
        std::cout << "Destructor called for A!" << std::endl;
    }

    friend void ChangeValues(A &, int a, int b, int c );
};

class B : public A {
private:
    int d, e, f;
    B()
        : d(0), e(0), f(0)
    {
        std::cout << "Constructor called for A!" << std::endl;
    }
    B(const B &someObj)
        : d(someObj.d), e(someObj.e), f(someObj.f) {}
    ~B()
    {
        std::cout << "Destructor called for A!" << std::endl;
    }

    friend void ChangeValues(B &, int a, int b, int c);
};

void ChangeValues(B & newObj, int a, int b, int c) {
    newObj.d = a;
    newObj.e = b;
    newObj.f = c;
}

void ChangeValues(A & newObj, int a, int b, int c) {
    newObj.a = a;
    newObj.b = b;
    newObj.c = c;
}

int main(void) {

}