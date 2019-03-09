#include <iostream>
using namespace std;

class SmartPtr
{
  private:
    int *ptr;

  public:
    explicit SmartPtr(int *p = NULL)
        : ptr(p) {}

    ~SmartPtr()
    {
        delete[] ptr;
    }

    // Overloading derefencing operator
    int &operator*()
    {
        return *ptr;
    }
};

int main()
{
    SmartPtr ptr(new int() );
    *ptr = 20;
    std::cout << *ptr;

    return 0;
}