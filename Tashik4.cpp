#include <iostream>
using namespace std;

class B
{
public:
    B(){
        A::x = 10;
    }
};

class A
{
  public:
    int x;
    friend class B;
};

int main(void)
{
    B newObj;
    // newObj.A.x = 10;
    // cout << newObj.A.x;
}