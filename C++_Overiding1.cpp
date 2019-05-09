class Base {
    virtual void A(float = 0.0f);
    virtual void B() const;
    virtual void C();
    void D();
};

class Derived : public Base {
    // Member function declared with 'override' does not
    // override a bsae class member
    void A(int = 0) override;
    // To fix this, change the 'int' to 'float'

    // Member function declared with 'override' does not
    // override a bsae class member
    // compile error because Derived::B() 
    // does not override Base::B() const
    virtual void B() override;
    // To fix this, add const after ()

    // This is okay. Derived::C() overrides Base::C()
    virtual void C() override;

    // Not allowed. compile error because Derived::D() 
    // does not override Base::D() 
    // (because Base::D() is not virtual)
    void D() override;
};