/*
This is just about as simple as it gets. Of course, you have to make sure that the <thread> header is included 
so the compiler can see the definition of the std:: thread class. As with much of the C++ Standard Library, 
std::thread works with any callable type, so you can pass an instance of a class with a function call operator 
to the std::thread constructor instead:
*/
#include <thread>

class background_task {
public:
    void operator() () const {
        void do_something(void);
        void do_something_else(void);
    }
};

int main(void) {
    background_task f;
    std::thread my_thread(f);
}

/*
In this case, the supplied function object is copied into the storage belonging to the newly created thread of 
execution and invoked from there. It’s therefore essential that the copy behave equivalently to the original, 
or the result may not be what’s expected.
*/