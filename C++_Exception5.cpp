#include <memory>

class SPResouceClass {
private:
    std::shared_ptr<int> m_p;
    std::shared_ptr<float> m_q;

public:
    SPResouceClass()
        :   m_p(new int), m_q(new float) {}
    // Implicitly defined dtor is OK for these members
    // shared_ptr will clean up and vaoid leaks regardless
};

class Shape {
    // ...
};

class Circle : public Shape {
    // ...
};

class Triangle : public Shape {
    // ...
};

class SPShapeResourceClass {
private:
    std::shared_ptr<Shape> m_p;
    std::shared_ptr<Shape> m_q;

public:
    SPShapeResourceClass()
        :   m_p(new Circle), m_q(new Triangle) {}
}