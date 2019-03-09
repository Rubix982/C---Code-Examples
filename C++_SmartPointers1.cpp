#include <iostream>
using namespace std;

// A genreic smart pointer class
template <class T>
class SmartPtr
{
    T *ptr;

  public:
    // Constructor
    explicit SmartPtr(T *p = NULL)
        : ptr(p) {}

    // Destructor
    ~SmartPtr()
    {
        delete ptr;
    }

    // Overloading derefencing operator
    T &operator*()
    {
        return *ptr;
    }

    T *operator->()
    {
        return ptr;
    }
};

int main()
{
    SmartPtr<int> ptr(new int());
    *ptr = 20;
    cout << *ptr;
    return 0;
}