/*
One situation in which you can encounter such problems is when the thread function holds pointers or references to local variables and the thread hasn’t
finished when the function exits. The following listing shows an example of just such a scenario.
*/
#include <thread>

void do_something(int i) {}

struct func {
    int & i;
    func(int & i_) : i(i_) {}
    
    void operator() () {
        for ( unsigned j = 0 ; j < 1000000 ; ++j ) {
            do_something(i);
        }
    }
};

void oops(void) {
    int some_local_state = 0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    my_thread.detach();
}

/*
In this case, the new thread associated with my_thread will probably still be running when oops exits d, 
because you’ve explicitly decided not to wait for it by calling detach() c. If the thread is still running, 
then the next call to do_something(i) B will access an already destroyed variable. This is just like 
normal single-threaded code—allowing a pointer or reference to a local variable to persist beyond the 
function exit is never a good idea—but it’s easier to make the mistake with multithreaded code, because it 
isn’t necessarily immediately apparent that this has happened.
*/