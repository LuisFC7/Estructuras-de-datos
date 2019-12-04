
a.out: main.o lista_simple.o
	gcc main.o lista_simple.o
main.o: main.c
	gcc -c main.c
lista_simple.o: lista_simple.c
	gcc -c lista_simple.c
run: a.out
	./a.out
clear:
	rm a.out main.o lista_simple.o
