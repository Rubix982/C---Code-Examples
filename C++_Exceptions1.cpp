#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
  public:
    virtual const char *what() const throw()
    {
        return "C++ exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        std::cout << "MyException caught" << e.what() << std::endl;
    }
}