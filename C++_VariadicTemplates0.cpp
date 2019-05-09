/* A variadic template is a class or function template that supports 
an arbitrary number of arguments. This mechanism is especially useful to C++ library 
developers because you can apply it to both class templates and function
templates, and thereby provide a wide range of type-safe
and non-trival functionality and flexibility.

Basic example of variadic templated class. */
template<typename... Arguments> class classname;
// On the left of the paremeter name, it signifies a parameter pack
// On the right, it expands the parameter packs into separate names
// You can also do this
template<typename ...Arguments> class classname;

// Or this as well
template<typename ...  Arguments> class classname;

/* In the preceding examples, Arguments is a parameter pack. The class 
classname can accept a variable number of arguments, as in these examples */

#include <vector>

template<typename... Arguments> clas vtclass;
vtclass< > vinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vinstance3;
vtclass<long, std::vector<int>, std::string> vtinstance4;

/* By using a variadic template class definition, you can also require at
least one parameter */
template<typename First, typename... Rest> class className;

// Here is a basic example of variadic template funciton syntax
template<typename ... Arguments> returntype functionname(Arguments... args);