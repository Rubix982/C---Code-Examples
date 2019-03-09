#include <iostream>
using namespace std;

class Base {
	public:
		virtual void show() = 0;
};

class Derived : public Base {
	
};

int main(void) {
	// Derived is not a concrete class, i.e, it is an abstract class and will not allow
	// the compiler to instantiate an object of class Derived
	Derived D;
	return 0;
}
