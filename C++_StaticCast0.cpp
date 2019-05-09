#include <string>
#include <iostream>

class A
{
    int x;

  public:
    A(int x = 0) : x(x)
    {
        std::cout << "Constructor called." << std::endl;
    }
    operator std::string()
    {
        std::cout << "Operator called." << std::endl;
        return std::to_string(x);
    }
};

int main(void)
{
    A obj(10);

    std::cout << "--------------------------------------------------" << std::endl;

    std::string str1 = obj;
    obj = 20;

    std::cout << "--------------------------------------------------" << std::endl;

    std::string str2 = static_cast<std::string>(obj);

    std::cout << "--------------------------------------------------" << std::endl;

    obj = static_cast<A>(40);
}