RM=/bin/rm -f

all: main

main: main.o queue.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef main.o queue.o -o main

main.o: main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 main.cpp

queue.o: queue.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 queue.cpp

clean:
	${RM} *.o main
