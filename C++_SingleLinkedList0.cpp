#include <iostream>
using namespace std;


class Node {
    public:
        int data;
        Node * next;

        Node() {}
        ~Node() {
            delete next;
        }
        Node(const Node & newObj) {
            this->data = newObj.data;
            this->next = newObj.next;
        }

        bool operator!=(const Node & newObj ) {
            return next == newObj.next;
        }
};

void printList( Node * Head) {
    while( Head->next != nullptr ) {
        std::cout << Head->next << std::endl;
        Head->next = Head->next->next;
    }
}

int main(void) {
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    printList(head);

    return 0;
}