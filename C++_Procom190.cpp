#include <iostream> 

struct Empty {};

struct Child : Empty
{
    int a;
};
void f()
{
    Empty a, b;
    if (&a == &b)
        std::cout << "This is Line A"
                  << "|";
    Empty *p1 = new Empty;
    Empty *p2 = new Empty;
    if (p1 == p2)
        std::cout << "This is Line B"
                  << "|";
    Child *c1 = new Child;
    void *c3 = &c1->a;
    if (c1 == c3)
        std::cout << "This is Line C";

    delete c1;
    delete p1;
    delete p2;
    free(c3);
}
int main()
{
    f();
    return 0;
}