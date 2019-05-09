#include <iostream>
using namespace std;
class Account
{
  public:
    Account(double d) { _balance = d; }
    virtual double GetBalance() { return _balance; }
    virtual void PrintBalance() { cerr << "Error. Balance not available for base type." << endl; }

  private:
    double _balance;
};
class CheckingAccount : public Account
{
  public:
    CheckingAccount(double d) : Account(d) {}
    void PrintBalance() { cout << "Checking account balance: " << GetBalance() << endl; }
};
class SavingsAccount : public Account
{
  public:
    SavingsAccount(double d) : Account(d) {}
    void PrintBalance() { cout << "Savings account balance: " << GetBalance(); }
};
int main()
{
    // Create objects of type CheckingAccount and SavingsAccount.
    CheckingAccount *pChecking = new CheckingAccount(100.00);
    SavingsAccount *pSavings = new SavingsAccount(1000.00);
    // Call PrintBalance using a pointer to Account.
    Account *pAccount = pChecking;
    pAccount->PrintBalance();
    // Call PrintBalance using a pointer to Account.
    pAccount = pSavings;
    pAccount->PrintBalance();
}