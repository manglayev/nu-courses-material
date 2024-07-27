RM=/bin/rm -f

all: main

main: Main.o BST.o Node.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef Main.o BST.o Node.o -o main

main.o: Main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Main.cpp

BST.o: BST.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 BST.cpp

Node.o: ../Node/Node.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 ../Node/Node.cpp
clean:
	${RM} *.o *.out main
