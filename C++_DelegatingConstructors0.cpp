#include <iostream>

class class_c
{
  public:
    int max;
    int min;
    int middle;
    class_c() {}
    class_c(int my_max)
    {
        max = my_max > 0 ? my_max : 10;
    }
    class_c(int my_max, int my_min)
    {
        max = my_max > 0 ? my_max : 10;
        min = my_min > 0 && my_min < max ? my_min : 1;
    }
    class_c(int my_max, int my_min, int my_middle)
    {
        max = my_max > 0 ? my_max : 10;
        min = my_min > 0 && my_min < max ? my_min : 1;
        middle = my_middle < max && my_middle > min ? my_middle : 5;
    }
};

int main(void) {
    class_c c1{ 10, 15, 30};
}