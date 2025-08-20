#include <iostream>
#include <thread>
#include <vector>

void hello(const int& id)
{
    std::cout<<"concurrent jthread: "<<id<<" with id: "<<std::this_thread::get_id()<<"!\n";
}

int main()
{
    std::cout<<"Main thread start !\n";
    std::vector<std::jthread> threads;
    int number_of_CPU_cores = std::thread::hardware_concurrency();
    printf("number of CPU cores: %d\n", number_of_CPU_cores);

    for (int i{0}; i < number_of_CPU_cores/2; ++i)
    {        
        threads.push_back(std::jthread{hello, i});
    }    
    
    std::cout<<"Main thread end !\n";
}