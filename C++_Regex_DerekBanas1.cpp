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
    std::string str6 = "Cat rat mat fat pat";
    std::regex reg6 ( "([Cr]at)");
    std::string owlFood = std::regex_replace(str6,
        reg6, "Owl");
    PrintMatches2(str6, reg6);
    
    std::string str7 = "F.B.I. I.R.S. CIA";
    std::regex reg7 ("([^ ]\..\..\.)");
    owlFood = std::regex_replace(str7,
        reg7, "Owl");
    PrintMatches2(str7, reg7);
    
    std::string str8 = "This is a\n multiline string\n"
            "that has many lines";
    std::regex reg8 ("\n");
    std::string noLBStr = std::regex_replace(str8,
        reg8, " ");
    PrintMatches2(str8, reg8);
    
    // You can also replace
    // \b : backspace
    // \f : form feed
    // \r : Carriage Return
    // \t : Tab
    // \v : Vertical Tab

    return 0;
}
