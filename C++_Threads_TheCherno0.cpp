#include <iostream>
#include <thread>
using namespace std;

bool is_true = false;

void DoWork(void)
{
    while (!is_true)
    {
        std::cout << "Waiting" << std::endl;
    }
}

int main(void) {
    std::thread worker(DoWork);

    std::cout << "In main thread. Thread ID: " << std::this_thread::get_id() << std::endl; 
    is_true = true;    

    worker.join();

    std::cin.get();
}