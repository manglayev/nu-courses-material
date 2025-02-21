#pragma once
#include <condition_variable>
#include <mutex>
#include <iostream>

class Criminal;

class Police
{
public:
    void giveRansom(Criminal &criminal);

    bool isMoneySent();

private:
    std::condition_variable m_cv;
    std::mutex m_mutex;
    bool moneySent = false;
};