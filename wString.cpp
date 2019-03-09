#include <cstring>
#include <iostream>

int main(int argc, char const *argv[])
{
    const char *test = "olé";

    std::cout << "sizeof(char)  :" << sizeof(char) << std::endl;
    std::cout << "test          :" << test << std::endl;
    std::cout << "sizeof(test)  :" << sizeof(test) << std::endl;
    std::cout << "strlen(test)  :" << strlen(test) << std::endl;
    std::cout << "test(ordinals):" ;

    for ( size_t i = 0, iMax = strlen(test) ; i != iMax ; ++i ) {
        std::cout << " " << static_cast<unsigned int> (
            static_cast<unsigned char>(test[i])
        );
    }

    std::cout << std::endl << std::endl;

    const wchar_t wtext[] = L"olé";

    std::cout << "sizeof(wchar_t)   : " << sizeof(wchar_t) << std::endl;
    // std::cout << "wtext          : " << wtext << std::endl; <-- error
    std::cout << "wtext             : UNABLE TO CONVERT NATIVELY." << std::endl;
    std::cout << L"wtext            : " << wtext << std::endl;

    std::cout << "sizeof(wtext)      : " << sizeof(wtext) << std::endl;
    std::cout << "wcslen(wtext)      : " << wcslen(wtext) << std::endl;

    std::cout << "wtext(ordinals)    :";

    for ( size_t i = 0, iMax = wcslen(wtext) ; i < iMax ; ++i ) {
        std::cout << " " << static_cast<unsigned int>(
                                static_cast<unsigned short>(wtext[i])
        );
    }

    std::cout << "\n" << std::endl;
    return 0;
}