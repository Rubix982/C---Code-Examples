#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    float stdwp[5]= { 52.5, 60.7, 38,2, 59.4, 75.6 };
    std::fstream file("test", ios::out);
    file.write( (char*) & stdw, sizeof(std));
    file.close();

    for ( int i = 0; i < 4 ; ++i )
        stdwp[i] = 0;

    file.open("test", ios::in );
    float std[4];
    file.read((char*) & std, sizeof(std));
    for(int i = 0; i < 5 ; ++i ) 
        std::cout << std[i] <<< endl;
 
    file.close();
}