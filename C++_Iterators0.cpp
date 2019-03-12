#include <iostream>
#include <iomanip>
#include <iterator>
#include <vector>

int main(void)
{
    std::vector<int> MyVector;
    std::vector<int>::iterator VectorIterator;

    // Forwards
    std::cout << std::setw(20) << std::right << "Forwards: \n\n"
              << std::left;
    for (int i = 0; i < 10; ++i)
        MyVector.push_back(i * 50);

    for (VectorIterator = MyVector.begin(); VectorIterator != MyVector.end(); ++VectorIterator)
        std::cout << *VectorIterator << " ";
    std::cout << "\n\n";

    for (auto Arg : MyVector)
        std::cout << Arg << " ";
    std::cout << "\n\n";

    int Temp = MyVector[9];
    MyVector.clear();

    // Backwards
    std::cout << std::setw(20) << std::right << "Backwards: \n\n"
              << std::left;
    for (int i = 0; i < 10; ++i, Temp -= 50)
        MyVector.push_back(Temp);

    for (VectorIterator = MyVector.begin(); VectorIterator != MyVector.end(); ++VectorIterator)
        std::cout << *VectorIterator << " ";
    std::cout << "\n\n";

    for (auto Arg : MyVector)
        std::cout << Arg << " ";
    std::cout << std::endl;
}