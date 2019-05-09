#include <iostream>

int main( int argc, char * argv[]) {

    std::cout << "The argument count is: " << argc - 1  << "\n";

    std::cout << "The arguments are: ";

    for ( int i = 1; i < argc ; ++i ) {
        std::cout << argv[i] << " ";
    }

}