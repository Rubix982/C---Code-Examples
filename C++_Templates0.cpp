#include <iostream>
#include <array>

template<typename T, size_t N>
constexpr size_t ArraySize(T (&)[N]) noexcept {
    return N;
}

int main(void) {
    
    int Array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::array<int, ArraySize(Array)> mappedVals;

    std::cout << mappedVals.size() << std::endl;

    return 0;
}