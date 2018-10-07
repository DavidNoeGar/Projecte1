all: test.exe
test.exe: llistabiord.o main.o
	gcc llista.o main.o -o test.exe -Wall -Wextra -ggdb
llistabiord.o: llista.c llista.h
	gcc llista.c -c -Wall -Wextra -ggdb
main.o: main.c
	gcc main.c -c -Wall -Wextra -ggdb
clean:
	rm *.o test core
