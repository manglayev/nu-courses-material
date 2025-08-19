#include <iostream>
#include <thread>
#include "Friend.h"
int main()
{
    std::cout<<"Main thread start !\n";
    Friend alphonse{"Alphonse"};
    Friend gaston{"Gaston"};
    std::jthread thread_1(&Friend::bow, &alphonse, std::ref(gaston));
    std::jthread thread_2(&Friend::bow, &gaston, std::ref(alphonse));
    std::cout<<"Main thread end !\n";
}