#include <iostream>
using namespace std;

void showFlags();

int main(void) {
    // show default condition of format flags
    showFlags();
    std::cout.setf(ios::right | ios::showpoint | ios::fixed);
    showFlags(); 

    return 0;
}

// This funciton fisplays the status of the format flags
void showFlags(void) {
    ios::fmtflags f = std::cout.flags(); // get flag settings

    // check each flag
    for ( long i = 0x4000 ; i ; i = i >> 1 ) 
        (i & f) ? (std::cout << "1 ") : (std::cout << "0 ");
    std::cout << " \n";
}