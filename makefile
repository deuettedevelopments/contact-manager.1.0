CC = gcc

all: header_files/common_header.h function_library/functions.c main.c
	$(CC) `pkg-config --cflags --libs gtk+-2.0` -c function_library/functions.c -o functions.o
	$(CC) `pkg-config --cflags --libs gtk+-2.0` functions.o main.c -o test

clean:
	rm -rf functions.o test
      	
