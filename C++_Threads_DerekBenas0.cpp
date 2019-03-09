#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

int GetRandom(int max)
{
    srand(time(NULL));
    return 1 + std::rand() % max;
}

void ExecuteThread(int id)
{
    auto nowTime = std::chrono::system_clock::now();
    std::time_t sleepTime =
        std::chrono::system_clock::to_time_t(nowTime);

    tm myLocalTime = *localtime(&sleepTime);

    std::cout << "Thread: " << id << " Sleep Time: " << std::ctime(&sleepTime) << "\n";
    std::cout << "Month: " << myLocalTime.tm_mon << "\n";
    std::cout << "Day: " << myLocalTime.tm_mday << "\n";
    std::cout << "Year: " << myLocalTime.tm_year << "\n";
    std::cout << "Hours: " << myLocalTime.tm_hour << "\n";
    std::cout << "Minutes: " << myLocalTime.tm_min << "\n";
    std::cout << "Seconds: " << myLocalTime.tm_sec << "\n";

    std::this_thread::sleep_for(std::chrono::seconds(GetRandom(3)));
    nowTime = std::chrono::system_clock::now();
    sleepTime = std::chrono::system_clock::to_time_t(nowTime);
    std::cout << "Thread: " << id <<
            "Awake Time: " <<
            std::ctime(&sleepTime) << "\n";

}

int main(void)
{
    std::thread thread_one(ExecuteThread, 1);

    thread_one.join();

    std::thread thread_two(ExecuteThread, 2);

    thread_two.join();

    return 0;
}