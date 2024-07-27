RM=/bin/rm -f

all: main

main: Main.o Node.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef Main.o Node.o -o main

main.o: Main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Main.cpp

Node.o: Node.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Node.cpp

clean:
	${RM} *.o main
