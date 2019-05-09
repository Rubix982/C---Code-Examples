#include <iostream>
using namespace std;

int main(void)
{
    int age;
    cout << "Enter Your Age :";
    cin >> age;
    char temp = age + 48; 
    while (1)
    {
        if (isdigit(temp))
        {
            if ( age >= 20 ) {
            cout << "Please Enter A Valid Age :";
            cin >> age;
            continue;
            }
            else 
                break;
        }
        else
            break;
    }
}