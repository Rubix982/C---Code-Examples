#include <iostream>
#include <string>

struct MemoryBlock {
    // TODO : Add resources for the class here
};

void g(const MemoryBlock &) {
    std::cout << "In g (const MemoryBlock&).\n";
}

void g(MemoryBlock &&) {
    std::cout << "In g(MemoryBlock&&).\n";
}

void g(const MemoryBlock &&)
{
    std::cout << "In g(const MemoryBlock&&).\n";
}

int main(void)  {
    MemoryBlock block;
    g(block);
    g(static_cast<MemoryBlock&&>(block));

    return 0;
}