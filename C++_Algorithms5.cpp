
// C++ program to demonstrate the use of std::find_end 
   
#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
    int i, j; 
   
    // Declaring the sequence to be searched into 
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 3, 4, 5 }; 
   
    // Declaring the subsequence to be searched for 
    vector<int> v2 = {3, 4}; 
   
    // Declaring an iterator for storing the returning pointer 
    vector<int>::iterator i1; 
   
    // Using std::search to find the first occurrence of v2 
    i1 = std::search(v1.begin(), v1.end(), v2.begin(),  
                     v2.end()); 
   
    // checking if iterator i1 contains end pointer of v1 or 
    // not 
    if (i1 != v1.end()) { 
        cout << "vector2 is present firstly at index " 
             << (i1 - v1.begin()); 
    } else { 
        cout << "vector2 is not present in vector1"; 
    } 
  
    // Using std::find_end to find the last occurrence of v2 
    i1 = std::find_end(v1.begin(), v1.end(), v2.begin(),  
                       v2.end()); 
   
    // checking if iterator i1 contains end pointer of v1 or  
    //not 
    if (i1 != v1.end()) { 
        cout << "\nvector2 is present lastly at index " 
             << (i1 - v1.begin()); 
    } else { 
        cout << "vector2 is not present in vector1"; 
    } 
    return 0; 
} 
