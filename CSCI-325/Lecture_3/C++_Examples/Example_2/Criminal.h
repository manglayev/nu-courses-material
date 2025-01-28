#pragma once
#include <condition_variable>
#include <mutex>
#include <iostream>

class Police;

class Criminal
{
public:
    void releaseHostage(Police &police);

    bool isHostageReleased();

private:
    std::condition_variable m_cv;
    std::mutex m_mutex;
    bool hostageReleased = false;
};