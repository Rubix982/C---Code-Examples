#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    // Defining first container
    vector<int> v = {1, 3, 10, 3, 10, 1, 3, 3, 10, 7, 8,
                     1, 3, 10};

    // Defining second container
    vector<int> v1 = {1, 3, 10};

    vector<int>::iterator ip;

    // Using std::find_end
    ip = std::find_end(v.begin(), v.end(), v1.begin(), v1.end());

    // Displaying the index where the last common occurrence
    // begins
    cout << (ip - v.begin()) << "\n";
    return 0;
}