ALL: test

test: 
	gcc main.c fileio.c datastructures.c assignment.c -o printing.c.exe -Wall -Wextra
	