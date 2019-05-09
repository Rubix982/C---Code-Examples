#include <iostream>
#include <string>
using namespace std;

class Aircraft {
private:
    string m_model;

public:
    int m_flyCount;

    weak_ptr myWingMan;

    void Fly(void) {
        cout << "Aircraft type" << m_model << " is flying!\n"; 
    }

    Aircraft(string model) {
        m_model = model;
        cout << "Aircraft type " << model << " is created\n"; 
    }

    Aircraft() {
        m_model = "Generic Model";
        cout << "Generic Model Aircraft created.\n";
    }

    ~Aircraft() {
        cout << "Aircraft type " << m_model << " is destroyed.\n"; 
    }
};