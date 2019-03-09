#include <iostream>

namespace ns
{
    class geek;
}

class ns::geek{
    public:
        void display(void) 
        {
            std::cout << "NS::Geek::Display()\n";
        }
};

int main(void) 
{
    ns::geek obj;
    obj.display();
    return 0;
}