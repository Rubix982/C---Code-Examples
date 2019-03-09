#include <iostream>
#include <string>

void PrintEntity(const Entity * const e);

class Entity {
    public:
        int x, y;

        Entity(int x, int y)
        {
            this->x = x;
            this->y = y;
            PrintEntity(this);
        }
};

void PrintEntity(const Entity * const e)
{

}

int main(void) 
{


    std::cin.get();
}