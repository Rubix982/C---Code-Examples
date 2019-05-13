
// CPP program to find and replace the value
// with another value in array
// using std::replace
#include <algorithm>
#include <iostream>
#include <array>
using namespace std;

// Driver code
int main()
{
    std::array<int, 9> Array { 10, 20, 30, 30, 20, 10, 10, 20 };

    // variable containing the old and new values
    int old_val = 20, new_val = 99;

    // print old array
    cout << "Original Array:";
    for (int i = 0; i < Array.size(); i++)
        cout << ' ' << Array.at(i);
    cout << '\n';

    // Function used to replace the values
    replace(Array.begin(), Array.end(), old_val, new_val);

    // new array after using std::replace
    cout << "New Array:";
    for (int i = 0; i < Array.size(); i++)
        cout << ' ' << Array.at(i);
    cout << '\n';

    return 0;
}