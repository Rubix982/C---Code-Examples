
// C++ program to demonstrate the use of std::find_end
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Defining first container
    vector<int> v = {1, 5, 7, 11, 13, 15, 30, 30, 7};

    // Defining second container
    vector<int> v1 = {13, 15};

    vector<int>::iterator ip;

    // Using std::find_end
    ip = std::find_end(v.begin(), v.end(), v1.begin(), v1.end(), [](int a, int b) { return a == b; });

    // Displaying the index where the last common occurrence begins
    cout << (ip - v.begin()) << "\n";
    return 0;
}