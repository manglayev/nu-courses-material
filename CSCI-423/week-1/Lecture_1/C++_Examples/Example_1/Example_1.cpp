#include "iostream"
#include "thread"

void hello()
{
    std::cout<<"Hello world from concurrent thread t!\n";
}

int main()
{
    std::cout<<"Hello world from main thread!\n";
    std::thread t(hello);
    t.join();
}