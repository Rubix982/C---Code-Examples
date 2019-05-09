#include <iostream>
#include <random>
#include <ctime>

int main(void) {
    std::mt19937 mt_rand(time(0));
    std::cout << mt_rand() << std::endl;
}