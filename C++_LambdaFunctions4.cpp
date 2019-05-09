#include <algorithm>
#include <iostream>
#include <vector>

int main(void) {

    std::vector<int> newVect { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int Sum = 0;

    std::for_each(newVect.begin(), newVect.end(), [&](int y) {
        if ( y % 2 == 0 )
            Sum += y;
    });

    std::cout << Sum << std::endl;
}