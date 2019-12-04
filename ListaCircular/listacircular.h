#ifndef __LISTACIRCULAR_H__
#define __LISTACIRCULAR_H__
#include <stdlib.h>
#include <stdio.h>

struct nodo{
	int dato;
	struct nodo* siguiente;
};


struct nodo *InsertarNodo(struct nodo *,int);
void BuscarNodo(struct nodo*,int);
struct nodo *ModificarNodo(struct nodo *,int);
struct nodo *EliminarNodo(struct nodo *,int);
void MostrarLista(struct nodo *);

#endif
