#include <iostream>

class MemoryBlock {
    // TODO: Add resources here for the class 
};

void f (const MemoryBlock & ) {
    std::cout << "In f(const MemoryBlock&). This version "
            "can modify the parameter." << std::endl;
}

void f (MemoryBlock &&)   {
    std::cout << "In f(MemoryBlock&&)."  
    " This version can modify the parameter." << std::endl;
}

int main(void) {
    MemoryBlock block;
    f(block);
    f(MemoryBlock());
}