#include "iostream"
#include "thread"

void hello()
{
    std::cout<<"Hello world from concurrent thread t!\n";
}

int main()
{
    std::cout<<"Hello world from main thread!\n";
    //std::thread::hardware_concurrency();
    std::thread t(hello);
    std::cout<<t.joinable()<<"\n";
    t.join();
    std::cout<<t.joinable()<<"\n";
}