// Program to take multiple lines of input

#include <iostream>
#include <string>

int main(void) {
    std::string newString;
    newString.clear();
    
    while (1) {
        std::string Temp;
        std::getline(std::cin, Temp);

        if ( Temp == "E" ) {
            newString = newString + std::to_string(sizeof(newString)); 
            break;
        }
        newString += Temp + "\n";
    }

    std::cout << newString;
}