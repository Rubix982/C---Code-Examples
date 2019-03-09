#include <iostream>
#include <string>
using namespace std;

class Buf {
    public:
        Buf( char* szBuffer, size_t sizeOfBuffer);
        Buf& operator=( const Buf & );
        void Display() { cout << buffer << endl; }

    private:
        char* buffer;
        size_t sizeOfBuffer;
};

Buf::Buf(char * szBuffer, size_t sizeOfBuffer ) {
    buffer = new char[++sizeOfBuffer];
    if (buffer) {
        strcpy_s( buffer, sizeOfBuffer, szBuffer );
        sizeOfBuffer = sizeOfBuffer;
    }
}

Buf& Buf::operator=( const Buf &otherBuf ) {
    if ( &otherBuf != this )
    {
        if (buffer)
            delete[] buffer;

        sizeOfBuffer = strlen( otherBuf.buffer ) + 1;
        buffer = new char[sizeOfBuffer];
        strcpy_s( buffer, sizeOfBuffer, otherBuf.buffer);
    }
    return *this;
}