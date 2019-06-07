#include <exception>
#include <iostream>

class MyException : public std::exception {
    virtual const char * what() const throw() {
        return "Exception ocurred.\n";
    }
};

int main(void) {
    int A;
    
    try {
        throw MyException();
    }
    catch( const std::exception & Error ) {
        std::cout << Error.what() << " at line number " << A << std::endl;
    }
}