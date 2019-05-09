#include <iostream>
using namespace std;

class C {
public:
  int p, q;

  C() :
    p(0), q(0) {
      std::cout << "C constructor called.\n" ; 
    }
};

class A
{

  private:
    int a, b;

  public:
    class B;
    class C;

    class B
    {
      private:
        int h;

      public:
        void xyz(C &);
    };

    class C
    {
      private:
        int p, q;

      public:
        friend void A::B::xyz(C &);
        void show()
        {
            cout << "\nValue Of C Class Variables p=" << p << " q=" << q;
        }
    };

};

void A::B::xyz(C &x)
{
    x.p = 10;
    x.q = 20;
}

int main()
{
    A::B aobj;
    A::C cobj;

    aobj.xyz(cobj);

    cobj.show();
}