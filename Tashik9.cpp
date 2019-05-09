#include<iostream>
using namespace std;

class A{
public:
	int b;
	void show1(){
		cout<<"\nValue Of 'b' Of Class A ="<<b;
	}
};

class B:private A{
	public:
		using A::show1;
};


int main(){
	class B y;
	y.show1();
}