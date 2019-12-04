#ifndef __PILA_H__
#define __PILA_H__


#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int dato;
	struct nodo* siguiente;
};


struct nodo * insertarNodo(struct nodo *,int );
void buscarNodo(struct nodo *,int);
struct nodo * eliminarNodo(struct nodo * ,int );
void imprimirPila(struct nodo *);

#endif
