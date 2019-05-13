
// CPP code to find all the elements that are odd
// and replace them with 0.
// using std::replace_if
#include <algorithm>
#include <iostream>
#include <array>

using namespace std;

// Driver code
int main()
{
    std::array<int, 10> Array {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // print old array
    cout << "Original Array:";
    for (int i = 0; i < Array.size(); i++)
        cout << ' ' << Array.at(i);
    cout << '\n';

    // replacement value
    int new_val = 0;

    // replace_if function
    std::replace_if(Array.begin(), Array.end(), [](int i) { return i % 2; }, new_val);

    // new array after using std::replace
    cout << "New Array:";
    for (int i = 0; i < Array.size(); i++)
        cout << ' ' << Array.at(i);
    cout << '\n';

    return 0;
}