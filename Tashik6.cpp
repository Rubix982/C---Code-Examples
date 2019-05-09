#include <iostream>
using namespace std;

class A
{
  private:
    int a;

  public:
    friend void xyz(A &);
    void showdata()
    {
        cout << "\na=" << a;
    }
};

void xyz(A &x)
{
    x.a = 5;
    cout << "Hello\n"
         << x.a;
}

int main()
{
    A obj;
    xyz(obj);
    obj.showdata();
}