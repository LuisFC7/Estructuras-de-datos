#include "listacircular.h"

struct nodo* primero = NULL;
struct nodo* ultimo = NULL;

struct nodo *InsertarNodo(struct nodo *lista,int dato){
	struct nodo *nuevo = (struct nodo*) malloc(sizeof(struct nodo));
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = primero;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
	}
	printf("\n Nodo ingresado con exito\n\n");
}

void BuscarNodo(struct nodo *pirmero, int dato){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	int buscado = dato, encontrado = 0;
	if(primero!=NULL){
		do{
			if(actual->dato == buscado){
				printf("\n Nodo con el dato ( %d ) Encontrado\n\n", buscado);
				encontrado = 1;
			}
			actual = actual->siguiente;
		}while(actual!=primero && encontrado!=1);

		if(encontrado==0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vaci\n\n");
	}
}

struct nodo *ModificarNodo(struct nodo *lista, int dato){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	int buscado = dato, encontrado = 0;
	if(primero!=NULL){
		do{
			if(actual->dato == buscado){
				printf("\n Nodo con el dato ( %d ) Encontrado", buscado);
				printf("\n Ingrese el nuevo dato para este Nodo: ");
				scanf("%d",&actual->dato);
				printf("\n Nodo modificado con exito\n\n");
				encontrado = 1;
			}
			actual = actual->siguiente;
		}while(actual!=primero && encontrado!=1);

		if(encontrado==0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vaci\n\n");
	}
}


struct nodo *EliminarNodo(struct nodo *lista,int dato){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	struct nodo* anterior = (struct nodo*)malloc(sizeof(struct nodo));
	anterior = NULL;
	int buscado = dato, encontrado = 0;
	if(primero!=NULL){
		do{
			if(actual->dato == buscado){
				printf("\n Nodo con el dato ( %d ) Encontrado", buscado);
				if(actual==primero){
					primero = primero->siguiente;
					ultimo->siguiente = primero;
				}else if(actual==ultimo){
					anterior->siguiente  = primero;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
				}
				printf("\n Nodo Eliminado\n\n");
				encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}while(actual!=primero && encontrado!=1);

		if(encontrado==0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void MostrarLista(struct nodo *lista){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	if(primero!=NULL){
		do{
			printf(" %d->", actual->dato);
			actual = actual->siguiente;
		}while(actual!=primero);
		printf("->%d",primero->dato);
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
