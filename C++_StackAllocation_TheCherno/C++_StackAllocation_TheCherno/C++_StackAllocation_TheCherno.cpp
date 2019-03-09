#include "pch.h"
#include <iostream>
using namespace std;

class Entity {
private:
	int x, y;
public:
	Entity() {
		std::cout << "Constructed Entity!" << std::endl;
	}

	~Entity() {
		std::cout << "Destructed Entity!" << std::endl;
	}
};

class ScopedPtr {
private:
	Entity* m_Ptr;

public:
	ScopedPtr(Entity * ptr)
		:	m_Ptr(ptr)
	{}

	~ScopedPtr()
	{
		delete m_Ptr;
	}
};

int main(void) {

	{
		Entity* e = new Entity();
		std::cout << e << std::endl;
	}

	std::cin.get();
}