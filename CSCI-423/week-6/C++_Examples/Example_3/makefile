NVCC=nvcc
CUDAFLAGS=-arch=sm_86
RM=/bin/rm -f

all: main

main: main.o
	${NVCC} ${CUDAFLAGS} main.o -o main

main.o: main.cu
		${NVCC} ${CUDAFLAGS} -c main.cu

clean:
	${RM} *.o main
