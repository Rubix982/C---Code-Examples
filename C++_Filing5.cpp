#include <iostream>
#include <fstream>
#include <string>

int main(void) {

    std::ifstream InFile("NewText.csv");
    std::string Temp("");
    int i = 0;

    while(std::getline(InFile, Temp, '\n')) 
        ++i;

    std::cout << i << std::endl;
}