// Program to remove/clear the string of all newlines
#include <algorithm>
#include <iostream>
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
    newString.erase(std::remove(newString.begin(), newString.end(), '\n'), newString.end());

    std::cout << "\nThe string with cleared newlines is: \n\n"
              << newString;
}