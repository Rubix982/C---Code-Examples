class Base {
    virtual void A(float = 0.0 );
    virtual void B() const;
};

class Derived : public Base {
    virtual void A(int = 0); // Specifies new parameter as int instead
                            // of float, treated as new function
    virtual void B(); // Specifies function as non-const, treated
                        // as new function
};