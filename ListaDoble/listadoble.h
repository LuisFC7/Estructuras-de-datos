#ifndef __LISTADOBLE_H__
#define __LISTADOBLE_H__
#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int dato;
	struct nodo* siguiente;
	struct nodo* atras;
};

struct nodo *InsertarNodo(struct nodo *,int);
void BuscarNodo(struct nodo *,int );
struct nodo *ModificarNodo(struct nodo*,int);
struct nodo *EliminarNodo(struct nodo *,int);
void MostrarListaIF(struct nodo *);
void MostrarListaFI(struct nodo*);

#endif
