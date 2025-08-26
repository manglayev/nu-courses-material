NVCC=nvcc
CUDAFLAGS=-arch=sm_60
RM=/bin/rm -f

all: main

main: main.o wrapperCaller.o kernel.o
	g++ main.o wrapperCaller.o kernel.o -o main -L/usr/local/cuda/lib64 -lcuda -lcudart

main.o: main.cpp kernel_header.cuh
	g++ -std=c++11 -c main.cpp

wrapperCaller.o: wrapperCaller.cpp kernel_header.cuh
	g++ -std=c++11 -c wrapperCaller.cpp

kernel.o: kernel.cu kernel_header.cuh
	${NVCC} ${CUDAFLAGS} -std=c++11 -c kernel.cu

clean:
	${RM} *.o main
