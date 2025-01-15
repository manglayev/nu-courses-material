#include <iostream>
#include <thread>
#include <vector>
#define SIZE 10

void sum(const int& parameter_1, const int& parameter_2, int array_2[SIZE])
{
    for (int i{0}; i < SIZE; i++)
    {
        std::cout<<array_2[i]<<" ";
    }
    std::cout<<"\n";
}

int main()
{
    std::cout<<"Main thread start !\n";
    int parameter_1 = 100;
    int parameter_2 = 200;
    
    int array_1[SIZE];
    for (int i{0}; i < SIZE; i++)
    {
        array_1[i] = i;
    } 

    std::jthread thread_1(sum, parameter_1, parameter_2, array_1);
    std::cout<<"Main thread end !\n";
}