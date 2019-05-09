#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class A{
	private:
		int a,b;
	public:
        A(int x=0 , int y=0) {
            a = 0;
            b = 0;
        }
        
        void save(){
			ofstream writer;
			writer.open("set",ios::out | ios::binary);
			if(!writer){
				cout<<"Sry file cant be opened";
				exit(1);
			}
			else{
				writer.write((char *)this,sizeof(this));
			}
			writer.close();
		}
		
		void show(){
			cout<<"press any key to see read output..";
			std::cin.get();
			system("cls");
			cout<<a<<"   "<<b;
		}
		
		void read(){
			ifstream reader;
			A x(5,10);
			reader.open("set",ios::in | ios::binary);
			if(!reader){
				cout<<"Sry file cant be opened";
				exit(1);
			}
			else{
			    reader.read((char *)&x,sizeof(x));
			}
			x.show();
			reader.close();
		}
		
};


int main(){
A obj(15,20);
obj.read();
}