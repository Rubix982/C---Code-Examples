#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char * argv[]) {
    std::ifstream InFile(argv[1], std::ios_base::in );
    std::string TempString;

    if ( InFile.is_open() ) {
        while ( !InFile.eof() ) {
            std::getline(InFile, TempString);
            std::cout << TempString << std::endl;
        }
    }
}