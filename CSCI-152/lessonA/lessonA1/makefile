RM=/bin/rm -f

all: Example-A1-1

Example-A1-1: Example-A1-1.o
	g++ Example-A1-1.o -o Example-A1-1

Example-A1-1.o: Example-A1-1.cpp
	g++ -std=c++20 -c Example-A1-1.cpp

clean:
	${RM} *.o Example-A1-1
