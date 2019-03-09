#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, char> Example ( 10, 'x' );
    auto bar = std::make_tuple ( "test" , 3.1, 14, 'y' );

    std::get<2>(bar) = 100;

    int myint; char mychar;

    std::tie ( myint, mychar ) = Example; // unpack elements
    std::tie (std::ignore, std::ignore, myint, mychar ) = bar; // unpack ( with ignore)

    mychar = std::get<3>(bar);

    std::get<0>(Example) = std::get<2>(bar) ;
    std::get<1>(Example) = mychar;

    std::cout << "foo container: ";
    std::cout << std::get<0>(Example) << ' ';
    std::cout << std::get<1>(Example) << '\n';
}