#include <iostream>
#include <cstdlib>

class listNode
{
  public:
    char Data;
    class listNode *nextPtr;
};

typedef class listNode ListNode;
typedef ListNode *ListNodePtr;

void insertList(ListNodePtr &cPtr, char value);
void instructions(void);
char deleteList(ListNodePtr &cPtr, char value);
bool isEmptyList(ListNodePtr &cPtr);
void printList(ListNodePtr currentPtr);

int main(void)
{
    ListNodePtr startPtr = nullptr;
    char item;

    instructions();
    std::cout << "?";
    size_t choice;
    std::cin >> choice;

    while (choice != 3)
    {
        switch (choice)
        {
        case 1:
            std::cout << "Enter a character: ";
            std::cin >> item;
            insertList(startPtr, item);
            printList(startPtr);
            break;

        case 2:
            if (!isEmptyList(startPtr))
            {
                std::cout << "Enter a character to be deleted: ";
                std::cin >> item;

                if (deleteList(startPtr, item))
                {
                    std::cout << item << " deleted\n";
                    printList(startPtr);
                }
                else
                    std::cout << item << " not found.\n\n";
            }
            else
                std::cout << "List is empty.\n";
            break;

        default:
            std::cout << "Invalid choice.\n";
            instructions();
            break;
        }
        std::cout << "? ";
        std::cin >> choice;
    }

    std::cout << "End of run";
}

void instructions(void)
{
    std::cout << "Enter your choice:\n"
                 "   1 to insert an element into the list.\n"
                 "   2 to delete an element into the list.\n"
                 "   3 to end.";
}

void insertList(ListNodePtr &cPtr, char value)
{
    ListNodePtr newPtr = new ListNode();

    if (newPtr != nullptr)
    { // is space available
        newPtr->Data = value;
        newPtr->nextPtr = nullptr;

        ListNodePtr previousPtr = nullptr;
        ListNodePtr currentPtr = cPtr;

        while (currentPtr != nullptr && value > currentPtr->Data)
        {
            previousPtr = currentPtr;         // walk to...
            currentPtr = currentPtr->nextPtr; // next mode...
        }

        // Insert new mode at beginning of list
        if (previousPtr == nullptr)
        {
            newPtr->nextPtr = cPtr;
            cPtr = newPtr;
        }
        else
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else
        std::cout << value << " not inserted. No memory available.\n";
}

char deleteList(ListNodePtr &cPtr, char value)
{
    if (value == cPtr->Data)
    {
        ListNodePtr tempPtr = cPtr;
        cPtr = cPtr->nextPtr;
        delete tempPtr;
        return value;
    }
    else
    {
        ListNodePtr previousPtr = cPtr;
        ListNodePtr currentPtr = cPtr->nextPtr;

        // Loop to find the correct location in the list
        while (currentPtr != nullptr && currentPtr->Data != value)
        {
            previousPtr = currentPtr;         // walk to...
            currentPtr = currentPtr->nextPtr; // next mode...
        }

        // Delete mode at currentPtr
        if (currentPtr != nullptr)
        {
            ListNodePtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            delete tempPtr;
            return value;
        }
    }
    return '\0';
}

bool isEmptyList(ListNodePtr &cPtr)
{
    return (cPtr == nullptr);
}

void printList(ListNodePtr currentPtr)
{
    // if list is empty
    if (isEmptyList(currentPtr))
        std::cout << "List is empty." << std::endl;
    else
    {
        std::cout << "The list is: ";

        while (currentPtr != nullptr)
        {
            std::cout << currentPtr->Data << " --> ";
            currentPtr = currentPtr->nextPtr;
        }

        std::cout << "Nullptr\n"
                  << std::endl;
    }
}