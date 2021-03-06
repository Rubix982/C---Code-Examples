// C++ program to demonstrate shared_ptr
#include <iostream>
#include <memory>
using namespace std;

class A
{
  public:
    void show() {
        cout << "A::show()" << endl;
    }
};

int main() {
    shared_ptr<A> p1 = make_shared<A>();
    cout << p1.get() << endl;
    p1->show();
    shared_ptr<A> p2 = make_shared<A>();
    p2->show();
    cout << p1.get() << endl;
    cout << p2.get() << endl;

    std::cout << "-----------------------------------------------" << std::endl;

    // Returns the number of shared_ptr objects
    //referring to the same managed object.
    cout << p1.use_count() << endl;
    cout << p2.use_count() << endl;

    std::cout << "-----------------------------------------------" << std::endl;

    // Relinquishes ownership of p1 on the object
    //and pointer becomes NULL
    p1.reset();
    cout << p1.get() << endl;
    cout << p2.use_count() << endl;
    cout << p2.get() << endl;

    return 0;
}
