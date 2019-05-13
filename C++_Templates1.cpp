#include <iostream>

/*

From Effective Modern C++ Design, Page 25, Item 3

Consider the following case scenario:

C++11 permits return types for single-statement lambdas to be deduced, and C++14 extends this to both all lambdas and all functions, 
including those with multiple statements. In the case of authAndAccess, 
that means that in C++14 we can omit the trailing return type, leaving just the leading auto. 
With that form of declaration, auto does mean that type deduction will take place. 
In particular, it means that compilers will deduce the function’s return type from the function’s implementation: 

template<typename Container, typename Index> // C++14;
auto authAndAccess(Container& c, Index i) {
    authenticateUser();
     return c[i];
}

Item 2 explains that for functions with an auto return type specification, compilers employ template type deduction. 
In this case, that’s problematic. As we’ve discussed, operator[] for most containers-of-T returns a T&, but Item 1 explains that during
template type deduction, the reference-ness of an initializing expression is ignored. Consider what that means for this client code:
std::deque<int> d; …
authAndAccess(d, 5) = 10; // authenticate user, 
return d[5], // then assign 10 to it; // this won't compile!

Here, d[5] returns an int&, but auto return type deduction for authAndAccess will strip off the reference, 
thus yielding a return type of int. That int, being the return value of a function, is an rvalue, 
and the code above thus attempts to assign 10 to an rvalue int. That’s forbidden in C++, so the code won’t compile.
To get authAndAccess to work as we’d like, we need to use decltype type deduction for its return type, i.e., 
to specify that authAndAccess should return exactly the same type that the expression c[i] returns. 
The guardians of C++, anticipating the need to use decltype type deduction rules in some cases where types are inferred, 
make this possible in C++14 through the decltype(auto) specifier. 
What may initially seem contradictory (decltype and auto?) actually makes perfect sense: 
auto specifies that the type is to be deduced, and decltype says that decltype rules should be used during the deduction. 
We can thus write authAndAccess like this:

*/

void authenticateUser(void) {}

template<typename Container, typename Index>


decltype(auto) authAndAccess(Container & c, Index i) {
    authenticateUser();
    return c[i];
}