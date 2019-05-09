#include <iostream>
#include <list>

int main(void) {

    std::list<int> numbers;

    for ( int i = 1 ; i < 4 ; ++i )
        numbers.push_back(i);

    std::list<int>::iterator it_Insert = numbers.begin();
    it_Insert++;
    numbers.insert(it_Insert, 100);
    std::cout << "Element: " << *it_Insert << std::endl;

    // A good chance that this program will work
    // A good chance that it won't, this is not always
    // reliable as we might lose track of the pointer is
    // standing at, so not a completely reliable method
    // to use if we want to remove
    std::list<int>::iterator it_Remove = numbers.begin();
    it_Remove++;

    // A better option would be  it_Remove = numbers.erase(it_Remove)
    numbers.erase(it_Remove);

    // It maybe due to chance that since we removed an element
    // from the it_Remove position above, that the memory
    // was not occupied by some garbage value. This may not always
    // be the case, thus, making it unreliable
    std::cout << "Element: " << *it_Remove << std::endl;

    // Why does this code not work?
    for ( auto iterator = numbers.begin() ; iterator != numbers.end() ; ) {
        
    }

    for( auto iterator : numbers ) 
        std::cout << iterator << "   ";

    return 0;
}