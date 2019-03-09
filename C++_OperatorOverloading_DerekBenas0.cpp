#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Box
{
  public:
    double length, width, breadth;
    std::string BoxString;

    Box()
    {
        length = 1, width = 1, breadth = 1;
    }

    Box(double l, double w, double b)
    {
        length = l, width = w, breadth = w;
    }

    Box &operator++()
    {
        length++;
        width++;
        breadth++;
        return *this;
    }

    operator const char *()
    {
        std::stringstream boxStream;
        boxStream << "Box: " << length << ", " << width << ", " << breadth;
        BoxString = boxStream.str();

        return BoxString.c_str();
    }

    // The above can also be written as

    // ostream & operator << (ostream &out, const Complex &c ) {
    // out << "Box: " << length << ", " << width << ", " << breadth;
    // return out; 

    Box &operator+(const Box &box2)
    {
        Box boxSum;
        boxSum.length = box2.length + this->length;
        boxSum.breadth = box2.breadth + this->breadth;
        return boxSum;
    }

    double operator[](int x)
    {
        if (x == 0)
            return length;
        else if (x == 1)
            return width;
        else if (x == 2)
            return breadth;
    }

    bool operator==(const Box &box2)
    {
        return ((length == box2.length) &&
                (width == box2.width) &&
                (breadth == box2.breadth));
    }

    bool operator<(const Box &box2)
    {
        double thisSize = length + width + breadth;
        double box2Size = box2.length + box2.width + box2.breadth;
        return thisSize < box2Size;
    }

    bool operator>(const Box &box2)
    {
        double thisSize = length + width + breadth;
        double box2Size = box2.length + box2.width + box2.breadth;
        return thisSize > box2Size;
    }

    void operator=(const Box &boxToCopy)
    {
        length = boxToCopy.length;
        width = boxToCopy.width;
        breadth = boxToCopy.breadth;
    }
};

int main()
{
    Box box(10, 10, 10);
    ++box;
    std::cout << box << "\n";

    Box box2(5, 5, 5);
    std::cout << "Box1 + Box2 = " << box + box2 << std::endl;

    std::cout << "Box Length: " <<
            box[0] << "\n";
    std::cout << std::boolalpha;

    std::cout << "Are boxes equal: " <<
        ( box == box2 ) << "\n";

    std::cout << "Is box < box2: " <<
        ( box < box2 ) << "\n";

    std::cout << "Is box > box2: " << (box > box2) << "\n";
}