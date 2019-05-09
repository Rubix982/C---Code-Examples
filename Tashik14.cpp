#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class A
{
private:
    class B;
    B *ptr;
    string name;

    class B
    {

    private:
        int x;

    public:
        void GetBData()
        {
            cout << "\nEnter x :";
            cin >> x;
        }
        void showBData()
        {
            cout << "\nvalue of x Of B class =" << x;
        }
    };

public:
    A()
    {
        name = "xxxx";
    }

    void storeAClassDataInFile()
    { //it should be called from main
        ofstream writer;
        writer.open("data.dat", ios::app | ios::binary);
        writer.write((char *)this, sizeof(this));
        writer.close();
        cout << "Data Has Been Written In File Successfully\nPress Any Key To Continue...";
        std::cin.get();
        system("cls");
    }

    void GetData()
    {
        cout << "Enter Name :";
        cin >> name;
        ptr = new B;
        ptr->GetBData();
    }

    void ShowAData()
    {
        system("cls");
        cout << "Name :" << name;
        ptr->showBData();
    }

    void readAllDataOfAClassFromFile()
    {

        ifstream reader;
        reader.open("data.dat", ios::in | ios::binary);
        reader.read((char *)this, sizeof(*this));
        ShowAData();
        reader.close();
    }
};

int main()
{
    A obj1;
    obj1.readAllDataOfAClassFromFile();
}