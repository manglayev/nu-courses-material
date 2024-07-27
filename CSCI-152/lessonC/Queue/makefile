RM=/bin/rm -f

all: main

main: Main.o Queue.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef Main.o Queue.o -o main

Main.o: Main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Main.cpp

Queue.o: Queue.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Queue.cpp

clean:
	${RM} *.o main
