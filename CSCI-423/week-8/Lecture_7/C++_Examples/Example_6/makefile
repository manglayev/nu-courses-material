NVCC=nvcc
CUDAFLAGS=-arch=sm_60
CUDAFLAGS += -DCUBE
#CUDAFLAGS += -DSQUARE
RM=/bin/rm -f

all: main

main: main.o wrapperCaller.o kernel.o device.o
	${NVCC} ${CUDAFLAGS} main.o wrapperCaller.o kernel.o device.o -o main

main.o: main.cpp
	${NVCC} ${CUDAFLAGS} -dc main.cpp

wrapperCaller.o: wrapperCaller.cpp
	${NVCC} ${CUDAFLAGS} -dc wrapperCaller.cpp

kernel.o: kernel.cu
	${NVCC} ${CUDAFLAGS} -dc kernel.cu

device.o: device.cu
	${NVCC} ${CUDAFLAGS} -dc device.cu

clean:
	${RM} *.o main
