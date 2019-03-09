#include <iostream>
#include <string>

class String {
    private:
        char* m_Buffer;
        unsigned int m_Size;
    public:
        String(const char* string) {
            m_Size = strlen(string);
            m_Buffer = new char[m_Size + 1];
            memcpy(m_Buffer, string, m_Size);
            m_Buffer[m_Size] = 0;
        }

        String(const String& other)
            : m_Size(other.m_Size)
        {   
            ;
        }

        ~String(void) 
        {
            delete[] m_Buffer;
        }

        char& operator[](unsigned int index)
        {
            return m_Buffer[index];
        }

        friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

int main() {
    String string = "Cherno";
    String second = string;
    std::cout << string << std::endl;
    std::cin.get();
}