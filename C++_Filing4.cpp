#include <iostream>
#include <string>
#include <fstream>

// ifstream, ofstream, fstream, filebuf, fstreambase

class Vectors2D
{
private:
    int X, Y;
public:
    Vectors2D(int X, int Y)
        :   X(X), Y(Y) {}
    ~Vectors2D() {}
};

int main(void) {

    int A, B;

    std::ofstream OutData("NewText.csv", std::ios_base::app );

  std::cout << "Enter 0 for both X and Y to close the file\n\n";

    while(1) {
        std::cout << "Enter X: ";
        std::cin >> A;
        std::cout << "Enter Y: ";
        std::cin >> B;

        if ( A == 0 && B == 0 )
            break;

        OutData << A << "," << B << "\n";
    }

    OutData.close(); 

    std::ifstream InFile("NewText.csv");
    int i = 0;

    std::string Temp;

    while(std::getline(InFile, Temp, ',')) {
        std::cout << Temp << " ";
    }
    InFile.close();

    return 0;
}