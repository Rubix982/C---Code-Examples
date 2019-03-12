// spec1_the_operator_new_function1.cpp
#include <malloc.h>
#include <memory.h>

class Blanks
{
  public:
    Blanks() {}
    void *operator new(size_t stAllocateBlock, char chInit);
};

void *Blanks::operator new(size_t stAllocateBlock, char chInit)
{
    void *pvTemp = malloc(stAllocateBlock);
    if (pvTemp != 0)
        memset(pvTemp, chInit, stAllocateBlock);
    return pvTemp;
}
// For discrete objects of type Blanks, the global operator new function
// is hidden. Therefore, the following code allocates an object of type
// Blanks and initializes it to 0xa5
int main()
{
    Blanks *a5 = new (0xa5) Blanks;
    return a5 != 0;
}