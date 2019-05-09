using namespace std;

class student
{
protected:
    int roll_number;

public:
    void get_number(int);

    void put_number(void);
};

void student::get_number(int a)
{
    roll_number = a;
}

void student::put_number()
{
    cout << "Roll no  is " << roll_number << "\n";
}

class test : public student
{
protected:
    float sub1, sub2;

public:
    void get_marks(float, float);

    void put_marks();
};

void test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y; //adas
}

void test::put_marks()
{
    cout << "\nMarks in SUB1 = " << sub1 << endl
         << "\nMarks in SUB2 = " << sub2 << endl;
}

class result : private test
{
private:
    float total;

public:
    void display(int, float, float);
};

void result::display(int a, float x, float y)
{
    // * This line. You have not initialized sub1 and sub2 of class test.
    // ? Make either a constructor in test that initializes these values to something
    // ? Or make a parameterized constructor for class result, and then pass the values to the above parents
    // // sub1 and sub 2 are defined
    total = sub1 + sub2;

    get_number(a);

    get_marks(x, y);

    put_number();

    put_marks();

    cout << "Total = " << total << endl;
}

int main()
{
    result r;
    r.display(23, 50, 50);
}