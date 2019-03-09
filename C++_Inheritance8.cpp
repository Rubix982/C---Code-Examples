#include <iostream>
using namespace std;

class Base {
	private:
		int x;
	
	public:
		virtual void func() = 0;
		int getX() {
			return x;
		}
};

class Derived : public Base {
	private:
		int y;
	public:
		voi func() {
			cout << "fun() called" << endl;
		}
};

int main(void) {
	Derived d;
	d.func();
	return 0;
}
