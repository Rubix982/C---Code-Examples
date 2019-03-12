#include <iostream>
#include <fstream>

int main(void) {
    std::streampos begin, end;

    std::ifstream myfile ("example.bin", std::ios::binary);
    begin = myfile.tellg();
    myfile.seekg( 0, std::ios::end );
    end = myfile.tellg();

    myfile.close();
    std::cout << "Size is: " << (end-begin) << " bytes.\n";
    return 0;
}