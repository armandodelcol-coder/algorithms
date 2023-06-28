CC=gcc

all: compile_program run_program clean

compile_program: merge-sort.c
	$(CC) -o program merge-sort.c

run_program:
	./program

clean:
	rm program