#include <iostream>
#include <fstream>
#include <string>
#include <exception>

class MyException : public std::exception
{
  public:
    int abc;

    virtual const char *what() const throw()
    {
        return "File cannot be found";
    }
    MyException() : abc(5) {}

    int GetNum() const
    {
        return abc;
    }
};

int main(void)
{
    std::string line;
    try
    {
        std::ifstream MyFile("SomeFile.txt");
        MyFile.open("SomeFile.txt");
        if (MyFile.is_open())
        {
            while (std::getline(MyFile, line))
            {
                std::cout << line << std::endl;
            }
            MyFile.close();
        }
        else
            throw MyException();
    }
    catch (const MyException &newExcept)
    {
        std::cout << newExcept.what() << std::endl;
        std::cout << newExcept.abc << std::endl;
    }
    return 0;
}