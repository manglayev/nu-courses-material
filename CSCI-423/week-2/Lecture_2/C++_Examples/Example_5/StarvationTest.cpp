#include <iostream>
#include <thread>
#include <vector>
#include "Starvation.h"
#include <condition_variable>
#include <mutex>

int main()
{
    std::cout<<"Main thread start !\n";    
    Starvation starvation;
    int size = 4;
    std::vector<std::jthread> threads;
    std::this_thread::sleep_for(std::chrono::milliseconds{100});
    for (int i{0}; i < 4; ++i)
    {
        threads.push_back(std::jthread{&Starvation::incrementValue, &starvation, i});
    }
    std::this_thread::sleep_for(std::chrono::milliseconds{100});
    std::cout<<"Main thread end !\n";
    return 0;
}