#include <iostream>

int main(void)  {
    int A = 5;
    int & Ref = A;
    Ref++;
    
    std::cout << "Ref: " << Ref << "\nA: " << A << std::endl;
}