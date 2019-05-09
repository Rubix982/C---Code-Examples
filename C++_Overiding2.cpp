class Base {
    // final identifier, marks this fnunction as
    // non-overrideable
    virtual void A() final; 
};

class Derived : public Base {
    // Trying to override final function 
    // Base::A() wil cause a compiler erro
    virtual void A(); 
}