class Foo
{
    Foo(long long);
    template <typename T> Foo(T) = delete;
};

int main(void) {

    return 0;
}