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
    // \w [a-zA-Z0-9]
    // \W [^a-zA-Z0-9]
    std::string str11 = "412-867-5309";
    std::regex reg11 ("\\w{3}-\\w{3}-\\w{4}");
    PrintMatches2(str11, reg11);

    return 0;
}
