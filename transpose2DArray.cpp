#include <iostream>
#include <iomanip>
#include <ios>

int main()
{
    int Array[5][5] = {0};

    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            Array[i][j] = (i*5 + j);

    std::cout << "Old array: " << std::endl;
    for (int i = 0, k = 4; i < 5; ++i, --k)
    {
        for (int j = 0; j < 5; ++j)
            std::cout << std::setw( 4 ) << std::left << Array[i][j];
        std::cout << std::endl;
    }

    int secondArray[5][5] = {0};

    for (int i = 0, k = 4; i < 5; ++i)
        for (int j = 0, k = 4 ; j < 5; ++j, --k )
            secondArray[i][j] = Array[k][i];

    std::cout << "New array: " << std::endl;
    for (int i = 0, k = 4; i < 5; ++i, --k)
    {
        for (int j = 0; j < 5; ++j) {
            std::cout.width( 4 );
            std::cout << std::left << secondArray[i][j];
        }
        std::cout.width( 0 );
        std::cout << std::endl;
    }
}