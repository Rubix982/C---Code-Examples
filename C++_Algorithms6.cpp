
// C++ program to find the last occurrence of an odd
// and even number

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // Defining a vector
    vector<int> v1 = {1, 3, 4, 5, 6, 7, 8, 10};

    // Declaring a sub-sequence
    vector<int> v2 = {2};

    // Using std::find_end to find the last occurrence of an odd number
    vector<int>::iterator ip;
    ip = std::find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), [](int a, int b) { return (a % b); });

    // Displaying the index where the last odd number occurred
    cout << "Last odd no. occurs at " << (ip - v1.begin());

    // Using std::find_end to find the last occurrence of an even number
    ip = std::find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), [](int a, int b) { return !(a % b); });

    // Displaying the index where the last even number occurred
    cout << "\nLast even no. occurs at " << (ip - v1.begin());

    return 0;
}