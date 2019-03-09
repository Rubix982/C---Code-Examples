#include <iostream>
#include <string>
using namespace std;

void MightGoWrong() {

    bool error1 = false;
    bool error2 = true;

    if (error1) 
        throw 8;
    
    if (error2) 
        throw 10;
}


int main() {
    try {
        MightGoWrong();
    }
    catch( const char* Exception ) {
        std::cout << "Error code: " << Exception << std::endl;
    }
    catch( int Exception ) {
        std::cout << "Error code: " << Exception << std::endl;
    }
    catch( string& Exception ) {
        std::cout << "Error code: " << Exception << std::endl;
    }

    std::cout << "Still running" << std::endl;

    return 0;
}