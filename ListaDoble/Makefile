
a.out: main.o listadoble.o
	gcc main.o listadoble.o
main.o: main.c
	gcc -c main.c
listadoble.o: listadoble.c
	gcc -c listadoble.c
run: a.out
	./a.out
clear:
	rm a.out main.o listadoble.o
