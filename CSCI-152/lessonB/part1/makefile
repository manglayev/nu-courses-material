RM=/bin/rm -f

all: main

main: main.o stack.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef main.o stack.o -o main

main.o: main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 main.cpp

stack.o: stack.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 stack.cpp

clean:
	${RM} *.o main
