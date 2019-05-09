#include <iostream>
#include <fstream>
using namespace std;

class student {
private:
    std::string name;
    int age;
    float gpa;

    public:
    void setdata(std::string n, int a, float f) {}
};

int main(void) 
{
    stduent std[3];
    fstream file;
    file.open("std.dat", ios::out);

    cout << "\n Saving data for three students";
        std[0].setdata("Ali", 20, 3.2);
        file.write( (char*) & std[0], sizeof(std[0]));

        std[1].setdata("Babar", 21, 2.9);
        file.write( (char*) & std[1], sizeof(std[1]));

        std[2].setdata("kamran", 21, 2.8);
        file.write( (char *) & std[2], sizeof(std[2]));

    file.close();
    cout < "\n Data saved.";

    std::cin.get();

    file.open("std.dat", ios::in );

    for ( int i = 0; i < 3 ; ++i ) {
        file.read((char*) &view[i], siuzeof(view[i]));
        view[i].getdata();
        cout << "\n\n";
    }

    file.close();
    return 0;
}