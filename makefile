all: test
test: llistabiord.o main.o
	gcc llista.o main.o -o test -Wall -Wextra -ggdb
llistabiord.o: llista.c llista.h
	gcc llista.c -c -Wall -Wextra -ggdb
main.o: main.c llista.h
	gcc main.c -c -Wall -Wextra -ggdb
clean:
	rm *.o test core
