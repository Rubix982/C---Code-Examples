#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include <fstream>

int main()
{

    std::ofstream writeToFile;
    std::ifstream readFromFile;
    std::string txtToWrite = " ";
    std::string txtFromFile = " ";

    /* 
    To open the file
    ios::app : Append to the endof the file
    ios::trunc : If the file exists, delete the content
    ios::in : Open file for reading
    ios::out : Open file for writing
    ios::ate : Open writing and move to the end of the file
    */

    writeToFile.open("test.txt", std::ios_base::out | 
            std::ios_base::trunc );

    if ( writeToFile.is_open() ){
        writeToFile << "Beginning of File\n";
        std::cout << "Enter data to write: ";

        getline(std::cin, txtToWrite);

        writeToFile << txtToWrite;
        writeToFile.close();
    }

    readFromFile.open("test.txt", std::ios_base::in);

    if ( readFromFile.is_open() ){
        while ( readFromFile.good() ){
            getline(readFromFile, txtFromFile);
            std::cout << txtFromFile << '\n';
        }

        readFromFile.close();
    } 
    
    return 0;
}