#include <exception>
#include <thread>

class scoped_thread {
    std::thread t;
public:
    explicit scoped_thread(std::thread t_)
        :   t(std::move(t_)) {
            if (!t.joinable()) {
                throw std::logic_error("No thread!");
            }
        }
};