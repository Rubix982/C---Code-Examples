// A simple example that uses typeid. 
#include <iostream> 
#include <typeinfo> 
using namespace std;

class myclass1 { 
public:
};

class myclass2 { 
public:
};

int main()
{
    int someInt, someOtherInt;
    float somefloat;
    char *somePointer;
    myclass1 ob1;
    myclass2 ob2;
    cout << "The type of i is: " << typeid(someInt).name() << endl;
    cout << "The type of f is: " << typeid(somefloat).name();
    cout << endl;
    cout << "The type of p is: " << typeid(somePointer).name();
    cout << endl;
    cout << "The type of ob1 is: " << typeid(ob1).name();
    cout << endl;
    cout << "The type of ob2 is: " << typeid(ob2).name();
    cout << "\n\n";
    if (typeid(someInt) == typeid(someOtherInt))
        cout << "The types of i and j are the same\n";
    if (typeid(someInt) != typeid(somefloat))
        cout << "The types of i and f are not the same\n";
    if (typeid(ob1) != typeid(ob2))
        cout << "ob1 and ob2 are of differing types\n";
    return 0;
}