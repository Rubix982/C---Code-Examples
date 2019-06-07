#include <thread>
#include <iostream>

class scoped_ptr {
    std::thread t;

public:
    explicit scoped_ptr(std::thread t_)
        :   t(std::move(t_)) {
            if ( !t.joinable()) {
                throw std::logic_error("No thread");
            }
        }
    
    ~scoped_ptr() {
        t.join();
    }

    scoped_ptr (scoped_ptr const & ) = delete;
    scoped_ptr & operator=(scoped_ptr const &) = delete;
};

struct func;

void f(void) {
    int some_local_state;
    scoped_ptr t(std::thread(func(some_local_state)));

    do_something_in_current_thread();
}