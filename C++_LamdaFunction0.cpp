#include <algorithm>
#include <cmath>

void abssort(float * x, unsigned int n) {
    std::sort( x, x + n,
            [](float a, float b) {
                return (std::abs(a) < std::abs(b) );
        }
    );
}

// [=] () mutable throw() -> int { int n = x + y; x = y; y = n; return n;}
// [] = Capture clause, lambda introducer
// () = parameter lsit is optional
// mutable specification, optional
// exception-specification, optional
// trailing-return-type optional
// labda body

struct S { void fun(int i); };

void S::f(int i ) {
    [&, i]{};       // OK
    [&, &i]{};      // ERROR: i preceded by & when & is the default
    [=, this]{};    // ERROR: this when = is default
    [=, *this]{};   // OK: capture this by value. See below
    [i, i]{};       // ERROR: i repeated
}

template<class... Args>
void f(Args... args) {
    auto x = [args...]{ return g(args...); };
    x();
}