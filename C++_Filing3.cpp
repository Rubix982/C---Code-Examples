#include <iostream>
#include <fstream>
#include <string>

#pragma pack(push, 1)

struct Person
{
    char Name[50];
    int Age;
    double Height;
};

#pragma pack(pop)

int main(void)
{
    // Write Binary File

    Person NewPerson_Write = {"Frodo", 220, 0.8};
    std::string fileName = "Newfile.bin";
    std::ofstream outputFile;
    outputFile.open(fileName, std::ios::binary);

    if (outputFile.is_open())
    {
        outputFile.write(reinterpret_cast<char *>(&NewPerson_Write), sizeof(Person));
        outputFile.close();
    }
    else
        std::cout << "Could not write file : " + fileName << std::endl;

    // Read Binary File
    Person NewPerson_Read = {};
    std::ifstream inputFile;
    inputFile.open(fileName, std::ios::binary);

    if (inputFile.is_open())
    {
        inputFile.read(reinterpret_cast<char *>(&NewPerson_Read), sizeof(Person));
        inputFile.close();
    }
    else
        std::cout << "Could not read file : " + fileName << std::endl;

    std::cout << NewPerson_Read.Name << ", " << NewPerson_Read.Age << ", " 
                << NewPerson_Read.Height << std::endl;
}