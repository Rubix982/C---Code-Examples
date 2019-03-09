#include <iterator>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> nums2 {1, 2, 3, 4};
    std::vector<int>::iterator itr;

    for ( itr = nums2.begin(); itr < nums2.end() ; itr++ ) {
        std::cout << *itr << "\n";
    } 
}