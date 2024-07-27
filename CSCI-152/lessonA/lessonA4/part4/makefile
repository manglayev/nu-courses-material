RM=/bin/rm -f

all: main

main: main.o safe_int_array.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef main.o safe_int_array.o -o main

main.o: main.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 main.cpp

safe_int_array.o: safe_int_array.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 safe_int_array.cpp

clean:
	${RM} *.o main
