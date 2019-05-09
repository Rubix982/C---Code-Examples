#include <iostream>
#include <fstream>
#include <string>

void Heading(void) {
    for ( int i = 0; i < 20 ; ++i )
        std::cout << "-";
    
    std::cout << "\n\n";
}

struct Person {
    int Age;
    std::string Name;
    std::string Country;
};

int main(void) {
    std::fstream FilePtr("NewText1.csv", std::ios::in, std::ios::_Noreplace );
    if ( !FilePtr.is_open() )
        FilePtr.open("NewTest1.csv", std::ios::out | std::ios::in | std::ios::trunc );
    
    std::cout <<  "Enter the contents for the record. Enter 0 in the first input to exit: " << std::endl;
    
    int TempAge;
    std::string TempName, TempCountry;

    while(1) {

        Heading();

        std::cout << "Enter the age of the person: ";
        std::cin >> TempAge;
        if ( TempAge == 0 )
            exit(EXIT_SUCCESS);
        
        std::cout << "Enter the name of the person: ";
        std::cin >> TempName;

        std::cout << "Enter the name of the person"
    }
}