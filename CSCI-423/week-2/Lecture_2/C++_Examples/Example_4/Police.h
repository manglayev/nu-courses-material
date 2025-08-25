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
    bool moneySent = false;
};