#pragma once
#include <condition_variable>
#include <mutex>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <unistd.h>

class Starvation
{
    public:
        void incrementValue(int threadId)
        {
            int value = 0;
            while(value < 4)
            {
                {
                    std::unique_lock<std::mutex> dataLock{m_mutex};
                    value++;
                    std::cout<<"Thread "<<threadId<<" with id "<<std::this_thread::get_id()<<" changed the value to "<<value<<"\n";
                    std::this_thread::sleep_for(std::chrono::milliseconds{100});
                }
            }
        }
        private:
            std::condition_variable m_cv;
            std::mutex m_mutex;
};