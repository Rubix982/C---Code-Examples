#include <regex>
#include <string>
#include <iostream>
#include <iterator>

void PrintMatches(std::string str,
                  std::regex reg)
{
    std::smatch matches;
    std::cout << std::boolalpha;

    while (std::regex_search(str, matches, reg))
    {
        std::cout << "Is there a match : " << matches.ready() << "\n";

        std::cout << "Are there no matches : " << matches.empty() << "\n";

        std::cout << "Number of matches : " << matches.size() << "\n";

        std::cout << matches.str(1) << "\n";
        str = matches.suffix().str();

        std::cout << "\n";
    }
}

void PrintMatches2(std::string str, std::regex reg)
{
    std::sregex_iterator currentmatch(str.begin(),
                                      str.end(), reg);
    std::sregex_iterator lastmatch;

    while (currentmatch != lastmatch)
    {
        std::smatch match = *currentmatch;
        std::cout << match.str() << "\n";
        currentmatch++;
    }
    std::cout << std::endl;
}

int main(void) {

    // \d [0-9]
    // \D [^0-9]
    std::string str9 = "12345";
    std::regex reg9 ("\\d");
    PrintMatches2(str9, reg9);

    std::string str10 = "123 12345 123456 1234567";
    std::regex reg10("\\d{5, 7}");
    PrintMatches2(str10, reg10);

    return 0;
}