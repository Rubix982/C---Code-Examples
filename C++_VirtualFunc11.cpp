#include <iostream>
#include <string>

enum
{
    sizeOfBuffer = 127
};

struct BTree
{
    char *szText;
    BTree *Left;
    BTree *Right;
};

// Define a pointer to the root of the tree
BTree *btrToot = 0;

int Add1(BTree **Root, char *szToAdd);
int Add2(BTree *&Root, char *szToAdd);
void PrintTree(BTree *btRoot);

int main(int argc, char const *argv[])
{
    // Usage message
    if (argc < 2)
    {
        std::cerr << "Usage: Refptr[1 | 2]"
                  << "\n";
        std::cerr << "\nWhere:\n";
        std::cerr << "1 uses double indirection\n";
        std::cerr << "2 uses a reference to a pointer.\n";
        std::cerr << "\nInput is from stdin.\n";

        return 1;
    }

    char *szBuf = new char[sizeOfBuffer];
    if (szBuf == NULL)
    {
        std::cerr << "Out of memory!\n";
        return -1;
    }

    // Read a text file from hte standard input device and
    // build  a binary tree
    while (!std::cin.eof())
    {
        std::cin.get(szBuf, sizeOfBuffer, '\n');
        std::cin.get();

        if (strlen(szBuf))
        {
            switch (*argv[1])
            {
            // Method 1 : Use double iteration
            case '1':
                Add1(&btrToot, szBuf);
                break;

            // Method 2 : Use reference to a pointer
            case '2':
                Add2(btrToot, szBuf);
                break;

            default:
                std::cerr << "Illegal Value " << *argv[1] << " supplied for add method.\n"
                          << "Choose 1 or 2.\n";
                return -1;
            }
        }
    }

    // display the sorted list
    PrintTree(btrToot);

    return 0;
}

void PrintTree(BTree *MybtRoot)
{
    // Traverse the left branch of the ree recursively
    if (btrToot->Left)
        PrintTree(btrToot->Left);

    // Print the current node.
    std::cout << btrToot->szText << "\n";

    // Traverse the right branch of the tree recursively
    if (btrToot->Right)
        PrintTree(btrToot->Right);
}

// Add1: Add a node to the binary tree
//      Uses double indirection
int Add1(BTree **Root, char *szToAdd)
{
    if ((*Root) == 0)
    {
        (*Root) = new BTree;
        (*Root)->Left = 0;
        (*Root)->Right = 0;
        (*Root)->szText = new char[strlen(szToAdd) + 1];
        strcpy_s((*Root)->szText, (strlen(szToAdd) + 1), szToAdd);
        return 1;
    }
    else
    {
        if (strcmp((*Root)->szText, szToAdd) > 0)
            return Add1(&((*Root)->Left), szToAdd);
        else
            return Add1(&((*Root)->Right), szToAdd);
    }
}

// Add2 : Add a node to the binary tree.
//          Uses reference to pointer
int Add2(BTree *&Root, char *szToAdd)
{
    if (Root == 0)
    {
        Root = new BTree;
        Root->Left = 0;
        Root->Right = 0;
        Root->szText = new char[strlen(szToAdd) + 1];
        strcpy_s(Root->szText, (strlen(szToAdd) + 1), szToAdd);
        return 1;
    }
    else
    {
        if (strcmp(Root->szText, szToAdd) > 0)
            return Add2(Root->Left, szToAdd);
        else
            return Add2(Root->Right, szToAdd);
    }
}