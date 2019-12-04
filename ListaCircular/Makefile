
a.out: main.o listacircular.o
	gcc main.o listacircular.o
main.o: main.c
	gcc -c main.c
listacircular.o: listacircular.c
	gcc -c listacircular.c
run: a.out
	./a.out
clear:
	rm a.out main.o listacircular.o

