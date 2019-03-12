#include <iostream>

class A
{
  private:
    int temp1;

  protected:
    int temp2;

  public:
    int temp3;
};

class B : protected A
{

  private:
    int b_temp1;

  protected:
    int b_temp2;

  public:
    int b_temp3;

    B()
    {
        b_temp1 = temp2;
    }
};

class C : B
{
  private:
  protected:
  public:
}