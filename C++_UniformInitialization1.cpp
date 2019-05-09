#include <string>

class class_a
{
private:
    /* data */
public:
    class_a();
    class_a(std::string str)    
        :   m_string{ str } {} 
    class_a(string str, double dbl) : m_string{ str }, m_double{ dbl } {}

    ~class_a();
};

class_a::class_a() {}

class_a::~class_a() {}

int main(void) {
    class_a c1{};
    class_a c1_1;

    class_a c2{ "ww" };
    class_a c2_1("xx");

    // Order of parameters is the same as the constructor
    class_a c3{ "yy", 4.4 };
    class_a c3_1("zz", 5.5);
}