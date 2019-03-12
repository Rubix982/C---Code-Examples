#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> IntVec;

    for ( int i = 0 ; i < 20 ; ++i )
        IntVec.push_back(i * 20 );
        
    std::vector<int>::iterator VecIterate;

    for ( VecIterate = IntVec.begin() ; VecIterate != IntVec.end() ; ++IntVec ) 
        std::cout << "IntVec[ " << VecIterate.
}