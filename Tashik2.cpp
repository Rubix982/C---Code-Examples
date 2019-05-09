#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> AccountsCounter;
    
    AccountsCounter["Saving Accounts"] = 0;
    AccountsCounter["Individual Retirement Accounts"] = 0;
    AccountsCounter["Basic Checking Accounts"] = 0;
    AccountsCounter["Interest Bearing Checking Accounts"] = 0;

    for (map<string, int>::iterator p = AccountsCounter.begin(); p != AccountsCounter.end(); ++p)
    {
        cout << "\n"
             << p->first << "\t" << p->second;
    }
}