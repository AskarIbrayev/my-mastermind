# -*- Makefile -*-

my_mastermind: my_mastermind.o my_strcmp.o 
	gcc -Wall -Wextra -Werror -o my_mastermind my_mastermind.o my_strcmp.o 

my_mastemind.o: my_mastermind.c my_mastermind.h
	gcc -c my_mastermind.c

my_strcmp: my_strcmp.c
	gcc -c my_strcmp.c

clean:
	rm -f *.o my_mastermind