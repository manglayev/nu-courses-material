RM=/bin/rm -f

all: LiveLockTest

LiveLockTest: LiveLockTest.o Criminal.o Police.o
	g++ -Wreturn-type -pedantic -pedantic-errors -Wundef LiveLockTest.o Criminal.o Police.o -o LiveLockTest

LiveLockTest.o: LiveLockTest.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 LiveLockTest.cpp

Criminal.o: Criminal.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Criminal.cpp

Police.o: Police.cpp
	g++ -c -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++20 Police.cpp

clean:
	${RM} *.o LiveLockTest