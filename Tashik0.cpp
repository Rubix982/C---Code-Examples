#include <iostream>
using namespace std;

class A
{
  private:
    class B
    {
      private:
        static int x;

      public:
        void display()
        {
            cout << "\nx=" << x;
        }
    };
    B obj;
  public:
    void abc()
    {
        obj.display();
    }
};

int A :: B :: x = 0;

int main()
{
    A objA;
    objA.abc();

    std::cin.get();
}