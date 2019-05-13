#include <iostream>
using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc() {}
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    friend loc operator+(loc op1, int op2);
    friend loc operator+(int op1, loc op2);
};

// + is overloaded for loc + int.
loc operator+(loc op1, int op2)
{
    loc temp;
    temp.longitude = op1.longitude + op2;
    temp.latitude = op1.latitude + op2;
    return temp;
}

// + is overloaded for int + loc.
loc operator+(int op1, loc op2)
{
    loc temp;
    temp.longitude = op1 + op2.longitude;
    temp.latitude = op1 + op2.latitude;
    return temp;
}

int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(7, 14);
    ob1.show();
    ob2.show();
    ob3.show();
    ob1 = ob2 + 10; // both of these 
    ob3 = 10 + ob2; // are valid
    ob1.show();
    ob3.show();
    return 0;
}