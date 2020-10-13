all: main

main: main.o hanoi.o pile.o
	gcc -Wall main.o hanoi.o pile.o -o main

main.o : pile.h main.c hanoi.h pile_type.h
	gcc -Wall -c main.c -o main.o

hanoi.o : hanoi.c hanoi.h pile_type.h
	gcc -Wall -c hanoi.c -o hanoi.o

pile.o :pile.h hanoi.c pile_type.h
	gcc -Wall -c pile.c -o pile.o 

clean:
	rm -f main pile *.o
