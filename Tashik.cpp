#include <iostream>
#include <fstream>

int main(void) {
    std::ofstream fout;
    fout.open("Hello.txt");
    fout << "Hello, World!";
}