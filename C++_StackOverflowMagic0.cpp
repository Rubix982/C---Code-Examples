// Is there a simple way to convert C++ enum to string?

#include <iostream>
 
#define SOME_ENUM(DO) \
    DO(Foo) \
    DO(Bar) \
    DO(Baz)

#define MAKE_ENUM(VAR) VAR,
enum MetaSyntacticVariable{
    SOME_ENUM(MAKE_ENUM)
};

#define MAKE_STRINGS(VAR) #VAR,

int main() {
    const char* const MetaSyntacticVariableNames[] = {
        SOME_ENUM(MAKE_STRINGS)
    };

    for ( auto rangeloop : MetaSyntacticVariableNames ) {
        std::cout << rangeloop;
    }

    return 0;
}