#include <cuda_runtime.h>
#include <iostream>

#define CHECK_CUDA_ERROR(val) check((val), #val, __FILE__, __LINE__)
void check(cudaError_t err, const char* const func, const char* const file, const int line)
{
    if (err != cudaSuccess)
    {
        std::cerr << "CUDA Runtime Error at: " << file << ":" << line << std::endl;
        std::cerr << cudaGetErrorString(err) << " " << func << std::endl;
        // We don't exit when we encounter CUDA errors in this example.
        // std::exit(EXIT_FAILURE);
    }
}

#define CHECK_LAST_CUDA_ERROR() checkLast(__FILE__, __LINE__)
void checkLast(const char* const file, const int line)
{
    cudaError_t const err{cudaGetLastError()};
    if (err != cudaSuccess)
    {
        std::cerr << "CUDA Runtime Error at: " << file << ":" << line << std::endl;
        std::cerr << cudaGetErrorString(err) << std::endl;
        // We don't exit when we encounter CUDA errors in this example.
        // std::exit(EXIT_FAILURE);
    }
}

int main()
{
    float* p;
    // This will produce error.
    CHECK_CUDA_ERROR(cudaMalloc(&p, 1000000000000000 * sizeof(float)));
    // This will be successful.
    CHECK_CUDA_ERROR(cudaMalloc(&p, 10 * sizeof(float)));
    // This will be successful.
    CHECK_CUDA_ERROR(cudaFree(p));
    // The last error still has not been reset here.
    // This will produce the same error as
    // cudaMalloc(&p, 1000000000000000 * sizeof(float))
    CHECK_LAST_CUDA_ERROR();
    // The last error has been reset here.
    CHECK_LAST_CUDA_ERROR();
}