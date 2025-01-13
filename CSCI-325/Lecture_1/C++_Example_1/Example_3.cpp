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
    std::cout<<t.joinable()<<"\n";
    t.join();
    std::cout<<t.joinable()<<"\n";
    
    int number_of_CPU_cores = std::thread::hardware_concurrency();
    std::cout<<"There are "<<number_of_CPU_cores<<" CPU cores."<<"\n";
}