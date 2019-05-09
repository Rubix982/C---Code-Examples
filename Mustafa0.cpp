#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string>
#include <exception>

class RunMyCode {
private:
    std::vector<std::string> newVec;
    std::vector<std::string>::iterator Start;
    std::vector<std::string>::iterator End;
public:
    RunMyCode(void) {
        Start = newVec.begin();
        End = newVec.end();
        newVec.push_back("James");
        newVec.push_back("Anderson");
        newVec.push_back("Michael");
        newVec.push_back("John");

        for (Start = newVec.begin(); Start != End; Start++)
            std::cout << (*Start) << std::endl;
    }
    
    void AppendText(void) {
        std::cout << std::endl;

        for ( Start = newVec.begin(); Start != End ; ++Start )
            (*Start) = "Hi, " + (*Start) + "! How are you?";

        for ( Start = newVec.begin(); Start != End; ++Start)
            std::cout << (*Start) << std::endl;
    }

    void SortVec(void) {
        std::sort(newVec.begin(), newVec.end());

        std::cout << "\nAfter sorting: " << std::endl;

        for (Start = newVec.begin(); Start != End; ++Start)
            std::cout << (*Start) << std::endl;
    }
};

int main(void)
{
    RunMyCode newObj;
    newObj.AppendText();
    newObj.SortVec();
    return 0;
}