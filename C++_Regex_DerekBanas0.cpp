#include <regex>
#include <string>
#include <iostream>
#include <iterator>

void PrintMatches(std::string str, 
    std::regex reg) {
    std::smatch matches;
    std::cout << std::boolalpha;
    
    while ( std::regex_search(str, matches, reg) ) {
        std::cout << "Is there a match : " <<
            matches.ready() << "\n";

        std::cout << "Are there no matches : " <<
            matches.empty() << "\n";

        std::cout << "Number of matches : " <<
            matches.size() << "\n";

        std::cout << matches.str(1) << "\n";
        str = matches.suffix().str();

        std::cout << "\n";
    }
}

void PrintMatches2(std::string str, std::regex reg) {
    std::sregex_iterator currentmatch(str.begin(), 
            str.end(), reg);
    std::sregex_iterator lastmatch;

    while ( currentmatch != lastmatch ) {
        std::smatch match = *currentmatch;
        std::cout << match.str() << "\n";
        currentmatch++;
    }
    std::cout << std::endl;
}

int main(void) {
    std::string str = "The ape was at the apex";
    std::regex reg("(ape[^ ]?)");
    PrintMatches(str, reg);

    for ( int i = 0 ; i < 20 ; ++i ) 
        std::cout << "-";
    
    std::cout << std::endl;

    std::string str2 = "I picked the pickle";
    std::regex reg2("(pick([^ ]+)?)");
    PrintMatches2(str2, reg2);

    std::string str3 = "Cat rat mat fat pat";
    std::regex reg3("([crmfp]at)");
    PrintMatches2(str3, reg3);

    std::regex reg4("([C-Fc-f]at)");
    PrintMatches2(str3, reg4);

    std::regex reg5("([^Cr]at)");
    PrintMatches(str3, reg5);

    return 0;
}