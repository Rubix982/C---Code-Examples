#include <memory>
#include <iostream>

struct W
{
    W(int &, int &) {}
    ~W() { std::cout << "W Destructor called.\n"; }
};

struct X
{
    X(int &, const int &) {}
    ~X() { std::cout << "X Destructor called.\n"; }
};

struct Y
{
    Y(const int &, int &) {}
    ~Y() { std::cout << "Y Destructor called.\n"; }
};

struct Z
{
    Z(const int &, const int &) {}
    ~Z() { std::cout << "Z Destructor called.\n"; }
};

template <typename T, typename A1, typename A2>
T *factory(A1 && a1, A2 && a2)
{
    // * NOTE: Including forward here
    return new T(std::forward<A1>(a1), std::forward<A2>(a2));
}

int main(void)
{

    int a = 4, b = 5;

    std::unique_ptr<W> ptrW(factory<W>(a, b));
    std::unique_ptr<X> ptrX(factory<X>(a, 5));
    std::unique_ptr<Y> ptrY(factory<Y>(4, b));
    std::unique_ptr<Z> ptrZ(factory<Z>(4, 5));

    return 0;
}