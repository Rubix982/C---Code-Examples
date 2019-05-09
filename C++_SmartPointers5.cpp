#include <iostream>
#include <memory>

class A{
public:
    void show() { std::cout << "A::show()" << std::endl; }
};

int main(void) {

    // p1 is an auto_ptr of type A
    // Deprecated auto_ptr
    std::auto_ptr<A> p1(new A);
    p1->show(); 
    
    // Returns the memory address of p1
    std::cout << p1.get() << std::endl; 

    std::cout << "-----------------------------------" << std::endl;

    // transfers ownership to p2
    std::unique_ptr<A> p2 = move(p1);
    p2->show();
    std::cout << p1.get() << std::endl;
    std::cout << p2.get() << std::endl;

    // Transfers ownership to p3
    std::unique_ptr<A> p3 = move(p2);
    p3->show();
    std::cout << p1.get() << std::endl;
    std::cout << p2.get() << std::endl;
    std::cout << p3.get() << std::endl;

    return 0;
}