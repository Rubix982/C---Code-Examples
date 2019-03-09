#include <iostream>

class Triangle {
	private:
		double area, base, height;
	
	public:
		Triangle(void)
			: area(0), base(0), height(0) {}

		Triangle(int a, int b)
			: area(0), base(a), height(b) {}
		
		void Print(void) const{
			std::cout << "Area: " << area << std::endl;
		}
		
		void GetVal(void) {
			std::cout << "For base: ";
			std::cin >> base;
			std::cout << "For height: ";
			std::cin >> height;
			area = base * height;
		}	
};

int main(void) {
	Triangle T1(5, 10);
	T1.GetVal();
	T1.Print();
}
