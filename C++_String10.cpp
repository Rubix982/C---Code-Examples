#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

void function(vector<A> & Vect) {}

class A {
public:
    int X, Y;

    A(int x, int y)
        :   X(x), Y(x) {}

    void Print(void) const {
        cout << "X = " << X << " Y = " << Y << "\n";
    }

    ~A() {
        std::cout << "Destructor called." << endl;
    }
};

int main(void) {

    vector<A> newString;

    for ( int i = 0; i < 10 ; ++i ) { newString.push_back({i, i+1}); }

    // for ( int i = 0; i < 10 ; ++i ) { newString[i].Print(); }

    for ( auto V : newString ) { V.Print(); 
    }

    function(newString);

    // A * Ptr = new A(4, 5);
    // unique_ptr<A> Ptr(new A(4, 5));

    // Ptr->Print();
}