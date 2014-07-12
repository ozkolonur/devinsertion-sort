CC=gcc

CFLAGS=-g3 -O0 -ggdb

all: insertion_sort

insertion_sort: main.c Makefile
	$(CC) $(CFLAGS) main.c -o insertion_sort

clean: 
	rm -f insertion_sort
