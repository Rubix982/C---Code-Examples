#include <iostream>

struct MyException  {
    MyException() {
        throw 5;
    }
};

int main(void) {

    try {
        MyException();
    }
    catch(int & Err) {
        std::cout << "Error code: " << Err << std::endl;
    }
}