CC=gcc

all: compile_program run_program clean

compile_program: insertion-sort.c
	$(CC) -o program insertion-sort.c

run_program:
	./program

clean:
	rm program