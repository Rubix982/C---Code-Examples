#include <iostream>
using namespace std;

class TestClass : public std::runtime_error
{
  public:
    TestClass(char const *const message) throw();
    virtual char const *what() const throw();
};

TestClass::TestClass(char const *const message) throw()
    : std::runtime_error(message)   {}

char const *TestClass::what() const throw()
{
    return exception::what();
}

int main(int argc, char **argv)
{
    try
    {
        cout << "About to call function" << endl;
        runAFunctionAndthrow();
    }
    catch (TestClass ex)
    {
        cout << "Exception Caught: " << ex.what() << endl;
    }

    return 0;
}

void runAFunctionAndthrow()
{
    cout << "going to run now. oh dear I need to throw an exception" << endl;

    stringstream logstream;
    logstream << "This is my exception error. :(";
    throw TestClass(logstream.str().c_str());
}