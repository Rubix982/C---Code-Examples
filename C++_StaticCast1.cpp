class Base {};
class Derived : private Base {};

int main(void) {
    Derived d1;
    Base *bp1 = (Base *)&d1;

    // Not allowed when inheritance is private
    Base *bp2 = static_cast<Base *>(&d1);
}