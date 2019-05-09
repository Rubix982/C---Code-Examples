#include <iostream>
#include <string>

class A
{
public:
    std::string Name;
    int Age;
    int Year;

private:
    friend std::ostream & operator<<(std::ostream &out, A &obj);
};

std::ostream & operator<<(std::ostream &out, A &obj)
{
    out << obj.Name << " is " << obj.Age << "'s year, and was born in "
        << obj.Year;

    return out;
}

int main(void)
{
    A newObj{"Saif Ul Islam", 19, 1990};
    A newObj2{"XYZ", 90, 1990};

    std::cout << newObj << newObj2;

    return 0;
}