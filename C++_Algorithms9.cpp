// CPP program to illustrate
// std::find_if and std::find_if_not
#include <iostream>
#include <vector>
#include <algorithm>

// Returns true if argument is odd
bool IsOdd(int i)
{
    return i % 2;
}

// Driver code
int main()
{
    std::vector<int> vec{10, 25, 40, 55};

    // Iterator to store the position of element found
    std::vector<int>::iterator it;

    // std::find_if
    it = std::find_if(vec.begin(), vec.end(), IsOdd);
    std::cout << "The first odd value is " << *it << '\n';

    // Iterator to store the position of element found
    std::vector<int>::iterator ite;

    // std::find_if_not
    ite = std::find_if_not(vec.begin(), vec.end(), IsOdd);

    std::cout << "The first non-odd(or even) value is " << *ite << '\n';

    return 0;
}