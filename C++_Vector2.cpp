#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main() {
	// Initializing vector with array values
	int arr[] = {10, 20, 5, 23, 42, 15};
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> vect(arr, arr + n);
	
	// Incomplete
}

