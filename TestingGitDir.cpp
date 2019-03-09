#include <iostream>
#include <exception>

void MightGoWrong(void) {
    bool ConditionOne = false;
    bool ConditionTwo = true;

    if ( ConditionTwo )
        throw 8;   
}

int main(void) {
    try {
        MightGoWrong();
    }
    catch ( int &e ) {
        std::cout << "An exception ocurred: " << e << std::endl;
    }
}