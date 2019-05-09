namespace A {
    void f(int) {}
}

using A::f;     // f is a synonym for A::f(int) only

namespace A {
    void f(char) {}
}

void f() {
    f('a');     // refers to A::f(int), even though A::f(char) exists
}

void b() {
    using A::f; // refers to A::f(int) ANd A::f(char)
    f('a');     // calls A::f(char);  
}