#include <iostream>
#include <thread>
#include "Police.h"
#include "Criminal.h"

int main()
{
    std::cout<<"Main thread start !\n";
    Criminal criminal;
    Police police;
    std::jthread thread_1(&Police::giveRansom, &police, std::ref(criminal));
    std::jthread thread_2(&Criminal::releaseHostage, &criminal, std::ref(police));
    std::cout<<"Main thread end !\n";
}