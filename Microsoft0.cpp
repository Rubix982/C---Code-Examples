#include <iostream>
using namespace std;

class Box {
    public:
        int Volume() {
            return m_width * m_height * m_length;
        }
    private:
        int m_width { 0 }, m_height { 0 }, m_length { 0 };
} ;

int main() {
    Box box1;
    cout << "box1.Volume: " << box1.Volume() << endl;
}