#include "pila.h"
struct nodo *primero = NULL;
struct nodo *insertarNodo(struct nodo *pila, int dato){
	struct nodo* nuevo = (struct nodo *) malloc(sizeof(struct nodo));
	nuevo->dato= dato;
	nuevo->siguiente = primero;
	primero = nuevo;
}

void buscarNodo(struct nodo *pila, int dato){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	int nodoBuscado = dato, encontrado = 0;
	if(primero != NULL){
		while(actual != NULL){


			if(actual->dato == nodoBuscado){
				printf("\n EL Nodo con el dato ( %d ) Encontrado\n\n", nodoBuscado);
				encontrado = 1;
			}

			actual = actual -> siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}

	}else{
		printf("\n La pila se encuentra Vacia\n\n");
	}
}


struct nodo *eliminarNodo(struct nodo *pila,int dato){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	struct nodo* anterior = (struct nodo*) malloc(sizeof(struct nodo));
	anterior = NULL;
	int nodoBuscado = dato, encontrado = 0;
	if(primero != NULL){
		while(actual != NULL && encontrado != 1){
			if(actual->dato == nodoBuscado){
				if(actual == primero){
					primero = primero -> siguiente;
				}else{
					anterior -> siguiente = actual -> siguiente;
				}
				printf("\n El Nodo ha sido eliminado con Exito");
				encontrado = 1;
			}
			anterior = actual;
			actual = actual -> siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La pila se encuentra Vacia\n\n");
	}
}

void imprimirPila(struct nodo *pila){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	if(primero != NULL){
		while(actual != NULL){
			printf("\n %d\n", actual -> dato);
			actual = actual -> siguiente;
		}
	}else{
		printf("\n La pila se encuentra Vacia\n\n");
	}
}
