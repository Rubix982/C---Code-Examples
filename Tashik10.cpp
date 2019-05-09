#include<iostream>
using namespace std;
class B;
class A{
	private :
		int a,b;
	public :
		A(){
			a=0;
			b=0;
		}
		void xyz(B &);
};

class B{
	private :
		int p,q;
	public:
		friend void A::xyz(B &);
		void show(){
			cout<<"\nValue Of B Class Variables p="<<p<<" q="<<q;
		}
		
};

void A::xyz(B &x)
{
    x.p = 10;
    x.q = 20;
}

int main(){
	A aobj;
	B bobj;
	aobj.xyz(bobj);
	bobj.show();
}