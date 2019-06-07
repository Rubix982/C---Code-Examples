#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>

void do_work(unsigned id);

void f(void) {
    std::vector<std::thread> threads;

    for ( unsigned int i = 0; i < 20 ; ++i ) {
        // Spawn threads
        threads.push_back(std::thread(do_work, i));
    }

    std::for_each(threads.begin(), threads.end(), std::mem_fn)
}