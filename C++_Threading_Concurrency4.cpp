#include <thread>
#include <iostream>

void some_function();
void some_other_function();

int main(void) {
    std::thread t1(some_function);
    std::thread t2 = std::move(t1);

    t1 = std::thread(some_other_function);
    std::thread t3;

    t3 = std::move(t2);
    t1 = std::move(t3);

    return 0;
}