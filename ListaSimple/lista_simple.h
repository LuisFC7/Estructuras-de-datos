
#ifndef __LISTA_SIMPLE_H__
#define __LISTA_SIMPLE_H__
#include <stdio.h>
#include <stdlib.h>

struct nodo{
  int dato;
  struct nodo* siguiente;
};


struct nodo* InsertarNodo(struct nodo *,int);
void BuscarNodo(struct nodo *,int);
struct nodo* ModificarNodo(struct nodo *,int);
void MostrarLista(struct nodo*);
struct nodo *EliminarNodo(struct nodo *,int);

#endif
