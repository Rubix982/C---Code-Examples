#include <iostream>
using namespace std;

template<typename T>
void Myswap(T & N1, T & N2) {
    T Temp = N1;
    N1 = N2;
    N2 = Temp;
}

int main(void) {    
    int A, B;
    float F1, F2;
    char C1, C2;

    cout << "Enter two nums: " << endl;
    cin >> A >> B;

    cout << "Enter tow floats: " << endl;
    cin >> F1 >> F2;

    cout << "Enter two nums: " << endl;
    cin >> C1 >> C2;
    
    // ! Myswap<int>(A, B);

    return 0;
}