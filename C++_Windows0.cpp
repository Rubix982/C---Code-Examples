#include <Windows.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>
#include <limits>
#include <stdexcept>

std::string FormatErrorMessage(DWORD error, const std::string & msg ) {
    static const int BUFFERLENGTH = 1024;
    std::vector<char> buf(BUFFERLENGTH);
    FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, 0, error, 0, buf.data(), BUFFERLENGTH - 1, 0);
    return std::string(buf.data()) + "  (" + msg + ")";
}

class Win32Exception : public std::runtime_error {
private:
    DWORD m_error;

public:
    Win32Exception(DWORD error, const std::string & msg)
        :   runtime_error(FormatErrorMessage(error, msg)), m_error(error) {}

    DWORD GetErrorCode(void) const { return m_error; }
};

void ThrowLastErrorIf(bool expression, const std::string & msg) {
    if (expression) {
        throw Win32Exception(GetLastError(), msg);
    }
}

class File {
private:
    HANDLE m_handle;

    // Declared but not defined, to avoid double checking
    File & operator=(const File &);
    File(const File &);

public:
    explicit File (const std::string & filename) {
        m_handle = CreateFileA(filename.c_str(), GENERIC_READ, FILE_SHARE_READ, 
                nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, nullptr );
        ThrowLastErrorIf(m_handle == INVALID_HANDLE_VALUE, "CreateFile call failed on file named " + filename );
    }

    ~File() { CloseHandle(m_handle); }
    HANDLE GetHandle() { return m_handle; }
};

size_t GetFileSizeSafe(const std::string & filename) {
    File fobj(filename);
    LARGE_INTEGER filesize;

    BOOL result = GetFileSizeEx(fobj.GetHandle(), &filesize);
    ThrowLastErrorIf( result == FALSE, "GetFileSizeEx failed: " + filename );

    if ( filesize.QuadPart < (std::numeric_limits<size_t>::max)()) {
        return filesize.QuadPart;
    }
    else {
        throw ;
    }
}

std::vector<char> ReadFileVector(const std::string & filename ) {
    File fobj(filename);
    size_t filesize = GetFileSizeSafe(filename);
    DWORD bytesRead = 0;

    std::vector<char> readBuffer(filesize);

    BOOL result = ReadFile(fobj.GetHandle(), readBuffer.data(), readBuffer.size(),
                &bytesRead, nullptr);

    ThrowLastErrorIf(result == FALSE, "ReadFile failed " + filename);
    
    std::cout << filename << " file size: " << filesize << ", bytesRead: "
            << bytesRead << std::endl;

    return readBuffer;
}

bool IsFileDiff(const std::string & filename1, const std::string & filename2) {
    return ReadFileVector(filename1) != ReadFileVector(filename2);
}

#include <iomanip>

int main(int argc, char const *argv[])
{
    std::string filename1("file1.txt");
    std::string filename2("file2.txt");

    try {
        if ( argc > 2) {
            filename1 = argv[1];
            filename2 = argv[2];
        }
        std::cout << "Using file names " << filename1 << " and " << filename2 << std::endl;

        if ( IsFileDiff(filename1, filename2)) {
            std::cout << "+++ Files are different." << std::endl;
        } else {
            std::cout << "=== Files match." << std::endl;
        }
    }
    catch ( const Win32Exception & e) {
        std::ios state(nullptr);
        state.copyfmt(std::cout);
        std::cout << e.what() << std::endl;
        std::cout << "Error code: 0x" << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
                    <<  e.GetErrorCode() << std::endl;
    
        std::cout.copyfmt(state);   // restore previous formatting
    }

    return 0;
}
