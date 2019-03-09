#include <iostream>
#include <string>

class Customer {

    private:
        char name[25];
        mutable char placedorder[50];
        int tableno;
        mutable int bill;

    public:
        Customer(char* s, char* m, int a, int p) 
            : tableno(a), bill(p)
        {
            strcpy(name, s);
            strcpy(placedorder, m);
        }

        void changePlacedOrder(char* p) const {
            strcpy(placedorder, p);
        }

        void changeBill(int s) const {
            bill = s;
        }

        void display() const {
            std::cout << "Customer name is: " << name << std::endl;
            std::cout << "Food ordered by customer is: " << placedorder << std::endl;
            std::cout << "table no is: " << tableno << std::endl;
            std::cout << "Total payable amount: " << bill << std::endl;
        }
};

int main() {
    const Customer c1("Pravasi Meet", "Ice Cream", 3, 100);
    c1.display();
    c1.changePlacedOrder("Gulab Jammuns");
    c1.changeBill(150);
    c1.display();,
}