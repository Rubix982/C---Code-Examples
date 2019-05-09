// using_declaration3.cpp
#include <stdio.h>

void f()
{
    printf_s("In f\n");
}

namespace A
{
void g()
{
    printf_s("In A::g\n");
}
} // namespace A

namespace X
{
using ::f;  // global f is also visible as X::f
using A::g; // A's g is now visible as X::g
} // namespace X

void h()
{
    printf_s("In h\n");
    X::f(); // calls ::f
    X::g(); // calls A::g
}

int main()
{
    h();
}