#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <iomanip>

void RunFunctions(std::function<void(int)> func)
{
    std::vector<int> newVector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::for_each(newVector.begin(), newVector.end(), func);
}

int main(void)
{

    auto Function1 = [](int y) {
        std::cout << std::setw(2) << std::setfill('0') << y << " ";
    };

    auto Function2 = [](int y) {
        std::cout << std::setw(2) << y * 2 << " ";
    };

    RunFunctions(Function1);
    std::cout << std::endl;
    RunFunctions(Function2);
    std::cout << std::endl;
}