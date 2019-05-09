#include <iostream>

template<typename T, typename Arg>
T create(Arg && a) {
    return T(std::forward<Arg>(a));
}

int main(void) {
    std::cou t<< std::endl;

    // Lvalues
    int five = 5;
    int myFive = create<int>(five);
    std::cout << "MyFive: " << myFive << std::endl;

    // Rvalues
    int myFive2 = create<int>(5);
    std::cout << "myFive2: " << myFive2 << std::endl << std::endl;
}