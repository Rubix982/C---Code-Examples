#include <iostream>
#include <iterator>
#include <map>

int main(void) {
    std::map<int, int> Map;

    // Insert elements in random order
    Map.insert(std::pair<int, int>(1, 40));
    Map.insert(std::pair<int, int>(2, 30));
    Map.insert(std::pair<int, int>(3, 50));
    Map.insert(std::pair<int, int>(4, 60));
    Map.insert(std::pair<int, int>(5, 40));
    Map.insert(std::pair<int, int>(6, 40));
    Map.insert(std::pair<int, int>(7, 70));
    Map.insert(std::pair<int, int>(8, 40));
    Map.insert(std::pair<int, int>(9, 90));
    Map.insert(std::pair<int, int>(10, 50));

    std::map<int, int>::iterator itr;

    std::cout << "\nThe Map is: \n" << "\tKEY\tELEMENT\n";
    
    for ( auto x : Map ) 
        std::cout << "\t" << x.first << "\t" << x.second << "\n";
    std::cout << std::endl;

    std::map<int, int> Map_2(Map.begin(), Map.end());

    // print all elements of the map gquiz2
    std::cout << "\nThe map gquiz2 after assign from Map is : \n\tKEY\tELEMENT\n";
    for (auto itr : Map_2)
        std::cout << '\t' << itr.first << '\t' << itr.second << '\n';
    std::cout << std::endl;

    // remove all elements up to
    // element with key=3 in gquiz2
    std::cout << "\ngquiz2 after removal of elements less than key=3 : \n" << "\tKEY\tELEMENT\n";
    Map_2.erase(Map_2.begin(), Map_2.find(3));
    for (auto itr : Map_2)
        std::cout << '\t' << itr.first << '\t' << itr.second << '\n';

    // remove all elements with key = 4
    int num = Map_2.erase(4);
    std::cout << "\ngquiz2.erase(4) : " << num << " removed \n\tKEY\tELEMENT\n";
    
    for (auto itr : Map_2)
        std::cout << '\t' << itr.first << '\t' << itr.second << '\n';
    std::cout << std::endl;

    // lower bound and upper bound for map Map key = 5
    std::cout << "Map.lower_bound(5) : " << "\tKEY = " << Map.lower_bound(5)->first << '\t';
    std::cout << "\tELEMENT = " << Map.lower_bound(5)->second << std::endl << "Map.upper_bound(5) : " << "\tKEY = ";
    std::cout << Map.upper_bound(5)->first << '\t' << "\tELEMENT = " << Map.upper_bound(5)->second << std::endl;

    return 0;
}