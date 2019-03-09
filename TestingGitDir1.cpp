#include <iostream>
#include <exception>

class MyNewExceptionHandling : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Error(404) ";
        }
        MyNewExceptionHandling () {}
};

int main(void) {
    try {
        throw MyNewExceptionHandling();
    }
    catch( MyNewExceptionHandling& Exception ) {
        std::cout << "An error ocurred: " << Exception.what() << std::endl;
    }
}