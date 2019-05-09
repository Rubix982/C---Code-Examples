// using_declaration1.cpp
#include <stdio.h>
class B
{
  public:
    void f(char)
    {
        printf_s("In B::f()\n");
    }

    void g(char)
    {
        printf_s("In B::g()\n");
    }
};

class D : B
{
  public:
    using B::f; // B::f(char) is now visible as D::f(char)
    using B::g; // B::g(char) is now visible as D::g(char)
    void f(int)
    {
        printf_s("In D::f()\n");
        f('c'); // Invokes B::f(char) instead of recursing
    }

    void g(int)
    {
        printf_s("In D::g()\n");
        g('c'); // Invokes B::g(char) instead of recursing
    }
};

int main()
{
    D myD;
    myD.f(1);
    myD.g('a');
}