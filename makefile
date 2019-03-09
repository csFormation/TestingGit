#This is a makefile


all: main
	
main: main.o function.o
	gcc -g -Wall -o main main.o function.o

main.o: main.c function.h
	gcc -g -Wall -c main.c

function.o: function.c function.h
	gcc -g -Wall -c function.c

clean:
	rm -f *.o core
