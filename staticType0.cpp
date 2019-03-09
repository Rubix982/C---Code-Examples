#include <iostream>

class Singleton {
    public:
        static Singleton& Get() { 
            static Singleton Instance;
            return Instance; 
        }

        void Hello() {}
};

Singleton* Singleton::s_instance = nullptr;

int main() {
    Singleton::Get().Hello();

    return 0;
}