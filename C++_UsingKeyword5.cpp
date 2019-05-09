#include <stdio.h>

void f() {
    printf_s("In f\n");
}

namespace A {
    void g() {
        printf_s("In A::g\n");
    }
}

namespace X {
    using ::f;      // Global f is now visible as X::f
    using A::g;     // A's g is now visible as X::g
}

void h() {
    printf_s("In h\n");
    X::f();         // Calls ::f
    X::g();         // Calls A::g
}

int main(void) {
    h();
}