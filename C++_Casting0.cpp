#include <iostream>

class Student {
    private:
        int roll;

    public:
        Student(int rno )
            : roll(rno ) {}

    void func(void) const {
        ( const_cast<Student*> (this ) )->roll = 5;
    }

    int GetRoll(void) const {
        return roll;
    }
};

int main() {
    Student S1(3);

    S1.func();

    std::cout << S1.GetRoll() << std::endl;

    return 0;
}