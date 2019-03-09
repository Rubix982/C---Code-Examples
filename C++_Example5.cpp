#include <string>
#include <iostream>
#include <sstream>

int main() {
	std::istringstream iss;
	std::string strvalues = "32 240 2 1450";
	
	iss.str(strvalues);
	
	for ( int n = 0 ; n<4 ; ++n )
	{
		int val;
		iss >> val;
		std::cout << val << '\n';
	}
	
	std::cout << "Finished writing the numbers in: ";
	std::cout << iss.str() << '\n';
}