#include <iostream>

struct C
{
    int x;

    C()
    {
    }

    C(const C &)
    {
        std::cout << "A copy was made." << std::endl;
    }
};

C f()
{
    return C();
}

int main()
{
    std::cout << "Hello world!" << std::endl;
    C obj = f();
    obj.x = 5;
    std::cout << obj.x << std::endl;

    return 0;
}