#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // fill the array with 10 five times
    v.assign(5, 10);

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size() ; ++i )
        cout << v[i] << " ";

    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v.at(n-1);

    // Removes the last element
    v.pop_back();

    // Prints the vector
    cout << "\nThe vector elements are: ";
    for ( int i = 0 ; i< v.size() ; ++i ) 
        cout << v.at(i) << " ";

    // Inserts 5 at the beginning
    v.insert(v.begin(), 5);

    cout << "\nThe first element is: " << v.at(0);

    // Removes the first element
    v.erase(v.begin());

    cout << "\nThe first element is: " << v.at(0);

    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v.at(0);

    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v.at(n-1);

    // Erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size() ; ++i ) 
        cout << v1.at(i) << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size() ; ++i ) 
        cout <<  v2.at(i) << " ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout << "\nAfter swap \nVector 1: ";
    for ( int i = 0; i < v1.size(); ++i ) 
        cout << v1.at(i) << " ";

    for (int i = 0 ; i < v2.size(); ++i )
        cout << v2.at(i) << " ";
}