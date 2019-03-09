#include <iostream>
#include <string>

class Entity {
    public:
        int x;

    private:
        void Print() const {
            std::cout << "Hello!" << std::endl;
        }
} ;

class ScopedPtr {
    private:
        Entity* m_Obj;
    public:
        ScopedPtr(Entity* entity )
            : m_Obj(entity)
        {}

        ~ScopedPtr()
        {
            delete m_Obj;
        }

    const Entity* operator->() const
    {
        return this->m_obj;
    }

};

int main() {
    const ScopedPtr entity = new Entity();
    entity->Print();

    std::cin.get();
}