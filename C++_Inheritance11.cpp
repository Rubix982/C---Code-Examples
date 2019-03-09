#include <iostream>
using namespace std;

// An abstract class with constructor
class Base {
	protected:
		int x;
	
	public:
		virtual void fun()= 0;
		Base(int i)
			: x(i) {}
};

class Derived : public Base {
	private:
		int y;
	
	public:
		Derived(int i, int j)
			: Base(i), y(j) {}
			
		void fun() {
			cout << "x = " << x << ", y = " << y << endl;
		}
		~Derived() {
			cout << "Destructor called" << endl;
		}
};

int main(void) {
	Derived D(4, 5);
	D.fun();
	return 0;
}
