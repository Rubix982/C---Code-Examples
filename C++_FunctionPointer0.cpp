#include <iostream>

void HelloWorld(int x) {
    std::cout << "Hello, World!" << x << std::endl;
}

int main() {
    void (*functionSecond)(int) = HelloWorld;

    auto (* function)(int) = HelloWorld;

    int x = 5, y = 10;

    functionSecond(x);
    function(y); 

    typedef void(*HelloWorldFunction)(int);

    HelloWorldFunction function = HelloWorld;

    std::cin.get();
}