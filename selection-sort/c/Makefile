CC=gcc

all: compile_program run_program clean

compile_program: selection-sort.c
	$(CC) -o program selection-sort.c

run_program:
	./program

clean:
	rm program