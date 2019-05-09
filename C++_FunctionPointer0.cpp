#include <iostream>

void HelloWorld(int x) {
    std::cout << "Hello, World!" << x << std::endl;
}

int xyz(int a) {

    return 0;
}

int main() {
    auto TashikFunction = HelloWorld;
    TashikFunction(10); 

    int * ptr = (int*) xyz;
    ptr(10);

/*  void (*functionSecond)(int) = HelloWorld;

    auto (* function)(int) = HelloWorld;

    int x = 5, y = 10;

    functionSecond(x);
    function(y); 

    typedef void(*HelloWorldFunction)(int);

    HelloWorldFunction function = HelloWorld; */

    std::cin.get();
}