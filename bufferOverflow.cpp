#include <iostream>
#include <string>

int main() {
    float fl;
    std::cin >> fl;
    std::cin.ignore(); // Added ignore here because enter given to the buffer
                        // at the end of cin above is sent to getline below.
    std::string str;
    std::getline(std::cin, str);
}