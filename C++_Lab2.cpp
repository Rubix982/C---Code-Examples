#include <iostream>

namespace ConotosoData
{
	class ObjectManager
	{
		public:
			void DoSomething() {}
	};
	void Func(ObjectManager) {}
}

ContosoData::ObjectManager mgr;
mgr.DoSomething();
ContosoData::Func(mgr;)

using ContosoData::ObjectManager;
ObjectManager mgr;
mgr.DoSomething();

using namespace ContosoData;

ObjectMan

int main() {
	
}
