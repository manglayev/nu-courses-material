all: main

main: Main.o DoublyLinkedList.o Node.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef Main.o DoublyLinkedList.o Node.o -o main

main.o: Main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Main.cpp

DoublyLinkedList.o: DoublyLinkedList.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 DoublyLinkedList.cpp

Node.o: Node.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Node.cpp

clean:
	${RM} *.o main
