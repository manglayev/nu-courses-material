RM=/bin/rm -f

all: main

main: main.o Sort.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef main.o Sort.o -o main

main.o: main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++17 main.cpp

Sort.o: Sort.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++17 Sort.cpp

clean:
	${RM} *.o *.out main