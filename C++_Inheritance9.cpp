#include <iostream>
using namespace std;

class Base {
	public:
		virtual void show() = 0;
};

class Derived : public Base {
	public:
		void show () {
			cout << "In derived \n" << endl;
		}
};

int main(void)
{
	Base *bp = new Derived();
	(*bp).show();
	return 0;
}
