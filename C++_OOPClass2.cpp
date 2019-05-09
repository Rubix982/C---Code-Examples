#include <iostream>

class Animal {
private:
    std::string name;
    std::string h
}

class Bird {
private:
    std::string name;
    std::string habitat;

public:
    Bird(const std::string& sp, const std::string &s, const std::string &h) {}
};

void WhatAreYouDoingValues(Animal a) {
    a.eat();
}

void WhatAreYouDoingReferences(const Animal & a)
{
    a.eat();
}
