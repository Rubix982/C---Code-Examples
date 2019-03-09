#include <iostream>
#include <exception>

class MyException : public std::exception {
    virtual const char* what() const throw() {
        return "Some exception ocurred";
    }
} myex;

int main(void) {
    try {
        throw myex;
    }
    catch( std::exception& e){
        std::cout << "Exception ocurred: " << e.what() << std::endl;
    }
}