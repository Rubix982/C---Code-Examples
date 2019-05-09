#include <iostream>

int main(void) {

    int count = 0;

    for ( int i = 0 ; i < 10 ; ++i ) 
        for ( int i = 0 ; i < 10 ;  ++i ) 
            std::cout << i << std::endl;

    std::cout << count;
}