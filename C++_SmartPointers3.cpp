#include <iostream>

int main() 
{
    int amtToStore;
    std::cout << "How many numbers do you want to store: " ;
    std::cin >> amtToStore;

    std::unique_ptr<int[]> pNums(new int(amtToStore));

    if ( pNums != nullptr) {
        int i = 0;
        while ( i < amtToStore ) {
            std::cout << "Enter a number: ";
            std::cin >> pNums[i++];
        }
    }
    std::cout << "You entered these numbers: \n";
    for ( int i = 0 ; i < amtToStore ;  ++i ) 
        std::cout << pNums[i] << "\n";

    return 0;
}