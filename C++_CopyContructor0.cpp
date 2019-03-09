#include <iostream>
#include <cstring>

#ifndef NULL
#ifdef _cplusplus
#define NULL 0
#else
#define NULL ((void *)0)
#endif
#endif

class String
{
  private:
    char *s;
    int size;

  public:
    String(const char *str = NULL); // constructor
    ~String();                      // destructor
    String(const String &);         // copy constructor
    void print();                   // function to print string
    void change(const char *);      // Function to change
};

String::String(const char *str = NULL)
{
    s = new char[strlen(str + 1)];
    strcpy(s, str);
}

String::String(const String &old_str)
{
    strcpy(new char[old_str.size + 1], old_str.s);
}

String::~String()
{
    delete[] s;
}

void String::change(const char *str)
{
    delete[] s;
    strcpy(new char[strlen(str) + 1], str);
}

int main()
{
    String str1("GeeksQuiz");

    String str2 = str1;

    str1.print(); // what is printed?
    str2.print();

    str2.change("GeeksForGeeks");

    str1.print(); // what is printed now?
    str2.print();
    return 0;
}
