#include <iostream>

struct type {
    int i;

    type()  :   i(3) {}
    void f(int v) const {
        // this->i = v;                 // Compile error: this is a pointer to const
        const_cast<type*>(this)->i = v; // OK as long as the type object isn't const
    }
};

int main(void) {
    int i = 3;                          // i is not declared const
    const int & rci = i;            
    const_cast<int&>(rci) = 4;          // OK: modifies i
    std::cout << "i = " << i << '\n';

    type t; // if this was const type t, then t.f(4) would be undefined behavior
    t.f(4);
    std::cout << "type::i = " << t.i << '\n';

    const int j = 3;
    int * pj = const_cast<int*>(&j);
    // *pj = 4; // undefined behavior

    void (type::* pmf)(int) const = &type::f;   // pointer to member function
    // const_cast<void(type::*)(int)->(pmf);    // Compile error: const_cast does
                                                // not work on function pointers
}