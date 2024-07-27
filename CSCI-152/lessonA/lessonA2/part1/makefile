RM=/bin/rm -f

all: lessonA2

lessonA2: lessonA2.o car.o
	g++ lessonA2.o car.o -o lessonA2

lessonA2.o: lessonA2.cpp
	g++ -std=c++20 -c lessonA2.cpp

car.o: car.cpp
	g++ -std=c++20 -c car.cpp

clean:
	${RM} *.o lessonA2
