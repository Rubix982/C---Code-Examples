#include <iostream>

int main(void) {
    int *PtrOne = new int(5);
    std::cout << *PtrOne << std::endl;

    // int *PtrTwo = new int();
    // PtrTwo = PtrOne;

    std::cout /* *PtrTwo << " " */ << &PtrOne << " " << PtrOne << " " << *PtrOne << std::endl;
    delete & PtrOne;
    std::cout /* *PtrTwo << " " */ << &PtrOne << " " << PtrOne << " " << *PtrOne << std::endl;

    // delete PtrTwo;

    std::cin.get();
}