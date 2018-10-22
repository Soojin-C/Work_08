all: sieve.o driver.o
	gcc driver.o


sieve.o: sieve.h sieve.c
	gcc -c sieve.c

driver.o: sieve.h driver.c
	gcc -c driver.c

run:
	./a.out
	make clear

clear:
	rm a.out
	rm driver.o
	rm sieve.o

