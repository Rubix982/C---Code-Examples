#include <iostream>
#include <string>

template<class T> struct S;

template<class T> 
struct S<T&> {
    static void print(T & t) {
        std::cout << "print<T&>: " << t << std::endl;
    }
};

template<class T> 
struct S<const T&> {
    static void print(const T & t) {
        std::cout <<"print<const T&>: " << t << std::endl;
    }
};

template<class T> 
struct S< T && > {
    static void print(T && t) {
        std::cout << "print<T &&>: " << t << std::endl;
    }
};

template<class T> 
struct S<const T && > {
    static void print(const T && t) {
        std::cout << "print<const T &&>: " << t << std::endl;
    }
};

template<class T> 
void print_type_and_value(T && t ) {
    S<T&&>::print(std::forward<T>(t));
}

const std::string fourth() { return std::string("fourth"); }
 
int main(void) {
    // The following call resolves to:
    // print_type_and_value<string&>(string& && t)
    // which collapses to:
    // print_type_and_value<string&>(string& t)
    std::string s1("first");
    print_type_and_value(s1);

    // The following call resolves to:
    // print_type_and_value<const string&>(const string& && t)
    // which collapses to:
    // print_type_and_value<const string&>(const string& t)
    const std::string s2("second");
    print_type_and_value(s2);

    // The following call resolves to:
    // print_type_and_vale<string&&>(string && t) 
    print_type_and_value(std::string("third"));

    // The following call resolves to:
    // print_type_and_value<const string&&>(const string && t)
    print_type_and_value(fourth());

    return 0;
}