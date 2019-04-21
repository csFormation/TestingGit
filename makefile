#This is a makefile


all: main
	
main: main.o function.o function2.o
	gcc -g -Wall -o main main.o function.o function2.o

main.o: main.c function.h function2.h
	gcc -g -Wall -c main.c

function.o: function.c function.h
	gcc -g -Wall -c function.c
	
function2.o: function2.c function2.h
	gcc -g -Wall -c function2.c

clean:
	rm -f *.o core
