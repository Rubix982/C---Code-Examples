#include <iostream>

namespace ns
{
    void display();
    class Geek
    {
        public:
            void display();
    };
}

void ns::Geek::display(void) {
    std::cout << "ns::geek::display()\n";
}

void ns::display()
{
    std::cout << "ns::display()\n";
}

int main(void)
{
    ns::Geek obj;
    ns::display();
    obj.display();

    return 0;
}