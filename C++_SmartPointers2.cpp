#include <iostream>
using namespace std;

template <typename T>
class SmartPointer
{
  private:
    T *tPointer;

  public:
    SmartPointer(T t)
    {
        this->tPointer = new T(t);
    }

    SmartPointer(T *const &tPointer)
    {
        this->tPointer = tPointer;
    }

    ~SmartPointer()
    {
        delete tPointer;
    }
};

int main()
{
    SmartPointer<int> smpt(new int(10));
    SmartPointer<double> smpt2(2.2);
}