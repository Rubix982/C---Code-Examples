#include <iostream>

class Entity {
public:
    Entity() {
        std::cout << "Entity created!" << std::endl;
    }

    ~Entity() {
        std::cout << "Entity destroyed!" << std::endl;
    }

    void Print() {}
};

int main(void) {

    {
        std::shared_ptr<Entity> e0;
        {
            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
            std::weak_ptr<Entity> weakEntity = sharedEntity;
            e0 = sharedEntity;
        }
    }

    std::cin.get();

    return 0;
}