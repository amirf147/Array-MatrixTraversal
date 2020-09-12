CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Sums 

Sums: Sums.o Array.o Matrix.o
	$(CC) $(CFLAGS) -o Sums Sums.o Array.o Matrix.o -lm

Sums.o: Sums.c Array.h Matrix.h
	$(CC) $(CFLAGS) -c Sums.c

Array.o: Array.c Matrix.h
	$(CC) $(CFLAGS) -c Array.c

Matrix.o: Array.c Matrix.h
	$(CC) $(CFLAGS) -c Matrix.c


clean:
	$(RM) Sums *.o *~

