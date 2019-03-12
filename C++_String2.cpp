// Program to remove/clear the string of all newlines
// Slightly different version of C++_Strings1.cpp
#include <algorithm>
#include <iostream>

// Iterator header file included
#include <iterator>
#include <string>

int main(void)
{
    std::string newString;
    newString.clear();

    while (1)
    {
        std::string Temp;
        std::getline(std::cin, Temp);

        if (Temp == "E")
        {
            //    newString = newString + std::to_string(sizeof(newString));
            break;
        }
        newString += Temp + "\n";
    }
    std::cout << "\nThe inputted string was: \n\n"
              << newString;

    // .erase is responsible for removing the '\n', while .begin() and .end() are the iterators
    // Same thing done here, just using the iterator methods.
    std::string::iterator BeginIterator = newString.begin();
    std::string::iterator EndIterator = newString.end();
    newString.erase(std::remove(BeginIterator, EndIterator, '\n'), newString.end());

    std::cout << "\nThe string with cleared newlines is: \n\n"
              << newString;
}