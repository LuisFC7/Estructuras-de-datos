
a.out: main.o Cola.o
	gcc main.o Cola.o
main.o: main.c
	gcc -c main.c
Cola.o: Cola.c
	gcc -c Cola.c
run: a.out
	./a.out
clear:
	rm a.out main.o Cola.o
