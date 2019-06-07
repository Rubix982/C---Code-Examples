// To find out number of cores on the device
#include <thread>
#include <iostream>
using namespace std;

int main(void) {
    unsigned int N = thread::hardware_concurrency();
    std::cout << N << " concurrent threads are supported.\n";
}