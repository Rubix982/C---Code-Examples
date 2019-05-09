#include <iostream> 
#include <set> 
#include <iterator> 
  
int main() 
{ 
    // empty std::set container 
    std::set <int, std::greater <int> > gquiz1;         
  
    // insert elements in random order 
    gquiz1.insert(40); 
    gquiz1.insert(30); 
    gquiz1.insert(60); 
    gquiz1.insert(20); 
    gquiz1.insert(50); 
    gquiz1.insert(50); // only one 50 will be added to the std::set 
    gquiz1.insert(10); 
  
    // printing std::set gquiz1 
    std::cout << "\nThe std::set gquiz1 is : "; 
    for ( auto itr : gquiz1 ) 
        std::cout << '\t' << itr; 
    std::cout << std::endl; 
  
    // assigning the elements from gquiz1 to gquiz2 
    std::set <int> gquiz2(gquiz1.begin(), gquiz1.end()); 
  
    // print all elements of the std::set gquiz2 
    std::cout << "\nThe std::set gquiz2 after assign from gquiz1 is : ";
    for (auto itr : gquiz2)
        std::cout << '\t' << itr;
    std::cout << std::endl;

    // remove all elements up to 30 in gquiz2 
    std::cout << "\ngquiz2 after removal of elements less than 30 : "; 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30));
    std::cout << std::endl;
    for (auto itr : gquiz2)
        std::cout << '\t' << itr;

    // remove element with value 50 in gquiz2 
    int num; 
    num = gquiz2.erase (50); 
    std::cout << "\ngquiz2.erase(50) : "; 
    std::cout << num << " removed \t" ;
    for (auto itr : gquiz2)
        std::cout << '\t' << itr;

    std::cout << std::endl; 
  
    //lower bound and upper bound for std::set gquiz1 
    std::cout << "gquiz1.lower_bound(40) : "
         << *gquiz1.lower_bound(40) << std::endl; 
    std::cout << "gquiz1.upper_bound(40) : "
         << *gquiz1.upper_bound(40) << std::endl; 
  
    //lower bound and upper bound for std::set gquiz2 
    std::cout << "gquiz2.lower_bound(40) : "
         << *gquiz2.lower_bound(40) << std::endl; 
    std::cout << "gquiz2.upper_bound(40) : "
         << *gquiz2.upper_bound(40) << std::endl; 
  
    return 0; 
  
} 