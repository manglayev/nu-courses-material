all: main

main: Main.o CircularLinkedList.o Node.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef Main.o CircularLinkedList.o Node.o -o main

main.o: Main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Main.cpp

CircularLinkedList.o: CircularLinkedList.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 CircularLinkedList.cpp

Node.o: Node.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Node.cpp

clean:
	${RM} *.o main
