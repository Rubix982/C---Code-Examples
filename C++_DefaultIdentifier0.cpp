class Foo
{
    // Disallow use of assignment operator
    Foo &operator=(const Foo &) = delete;

    // Disallow copy constructor
    Foo(const Foo&) = delete;
};

int main(void) {

    return 0;
}