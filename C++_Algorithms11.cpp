
// CPP code to find all the elements that are odd
// and replace them with 0.
// using std::replace_if
#include <bits/stdc++.h>
using namespace std;

// Function that is used in std::replace_if
// If number is odd return 1, else 0
// 1 (True) means replace the number
// 0 (False) means does not replace
bool IsOdd(int i)
{
    return ((i % 2) == 1);
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // print old array
    cout << "Original Array:";
    for (int i = 0; i < n; i++)
        cout << ' ' << arr[i];
    cout << '\n';

    // replacement value
    int new_val = 0;

    // replace_if function
    replace_if(arr, arr + n, IsOdd, new_val);

    // new array after using std::replace
    cout << "New Array:";
    for (int i = 0; i < n; i++)
        cout << ' ' << arr[i];
    cout << '\n';

    return 0;
}
