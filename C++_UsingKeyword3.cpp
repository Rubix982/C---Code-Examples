// post_declaration_namespace_additions.cpp
// compile with: /c
namespace A
{
void f(int) {}
} // namespace A

using A::f; // f is a synonym for A::f(int) only

namespace A
{
void f(char) {}
} // namespace A

void f()
{
    f('a'); // refers to A::f(int), even though A::f(char) exists
}

void b()
{
    using A::f; // refers to A::f(int) AND A::f(char)
    f('a');     // calls A::f(char);
}