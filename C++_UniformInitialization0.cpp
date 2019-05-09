#include <string>

class class_f {
public:
    class_f() = delete;
    clas_f(std::string x)
        :   m_string{x} {}

    std::string m_string;
};

int main(void) {
    class_f cf{ "hello" };  // OK
    class_f cf1{};          // Compile rror C2280: attempting to reference
                            // a deleted function
}