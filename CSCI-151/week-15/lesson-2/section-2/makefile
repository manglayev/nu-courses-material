SRC = fill_array.c print_array.c sort_array.c binary_search.c example-2.c
OBJ = fill_array.o print_array.o sort_array.o binary_search.o example-2.o

PROGRAM = example-2

$(PROGRAM): $(OBJ)
	gcc $(OBJ) -o $(PROGRAM)

%.o: %.c
	gcc -c $< -o $@

clean:
	rm *.o $(PROGRAM)
