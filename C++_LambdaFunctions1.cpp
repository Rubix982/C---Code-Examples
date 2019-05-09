#include <iostream>
#include <algorithm>
#include <vector>

bool is_greater_than_5(int value) {
    return value > 5;
}

int main(void) {
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
    auto greater_than_5_count = std::count_if(numbers.begin(), numbers.end(), is_greater_than_5);

    std::cout << "The number of elements greater than 5 is: " <<
        greater_than_5_count << "." << endl;

}