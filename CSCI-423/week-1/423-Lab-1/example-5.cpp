#include <iostream>
#include <thread>

void hello()
{
    std::cout<<"Concurrent jthread t!\n";
}

int main()
{
    std::cout<<"Main thread start !\n";
    std::jthread t(hello);
    //t.join();
    std::cout<<"Main thread end !\n";
}