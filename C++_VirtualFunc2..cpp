#include <string>
#include <iostream>

class Animal {
    protected:
        std::string m_name;

    public:
        Animal(std::string name)
            : m_name(name)
        {}

        std::string getName() { return m_name; }
        virtual const char* speak() = 0;
};

const char* Animal::speak() {
    return "buzz";
}

class Dragonfly : public Animal {
    public:
        Dragonfly(std::string name)
            : Animal(name)
        {}
};