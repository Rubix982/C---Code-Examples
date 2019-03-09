#include <iostream>

namespace F
{

class Data {
	private:
		int age;
		
	public:
		void fun(int age)
		{
			this->age = age;
			std::cout << age;
		}
};
}

namespace S
{
class Data {
	private:
		int age;
		
	public:
		void fun(int age)
		{
			this->age = age;
			std::cout << age;
		}
};
}

int main() {
	F::Data a1;
	int age;
	std::cin >> age;
	a1.fun(age);
	return 0;
}
