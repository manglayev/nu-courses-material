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
    bool hostageReleased = false;
};