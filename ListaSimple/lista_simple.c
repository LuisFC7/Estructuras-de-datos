#include "lista_simple.h"
struct nodo *primero =NULL;
struct nodo *ultimo =NULL;
struct nodo* InsertarNodo(struct nodo *lista,int dato){
	struct nodo* nuevo = (struct nodo*) malloc(sizeof(struct nodo));
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = nuevo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
	printf("\n Nodo ingresado con Exito\n");
}

void BuscarNodo(struct nodo*lista,int dato){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	int Buscado = dato, encontrado = 0;

	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){

			if(actual->dato == Buscado){
				printf("\n El nodo con el dato ( %d ) Encontrado\n\n",Buscado);
				encontrado = 1;
			}

			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n El dato no esta en la lista \n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

struct nodo* ModificarNodo(struct nodo* lista,int dato){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	int Buscado = dato, Encontrado = 0;
	if(primero!=NULL){
		while(actual != NULL && Encontrado != 1){

			if(actual->dato == Buscado){
				printf("\n El nodo con el dato ( %d ) Encontrado", Buscado);
				printf("\n Ingrese el nuevo dato para este Nodo: ");
				scanf("%d", &actual->dato);
				printf("\n Nodo modificado con exito\n\n");
				Encontrado = 1;
			}

			actual = actual->siguiente;
		}
		if(Encontrado == 0){
			printf("\n Nodo no encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
struct nodo *EliminarNodo(struct nodo *lista,int dato){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	struct nodo* anterior = (struct nodo*) malloc(sizeof(struct nodo));
	anterior = NULL;
	int Buscado = dato, Encontrado = 0;
	if(primero!=NULL){
		while(actual != NULL && Encontrado != 1){

			if(actual->dato == Buscado){

				if(actual == primero){
					primero = primero->siguiente;
				}else if(actual == primero){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
				}

				printf("\n Nodo eliminado con exito\n");
				Encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		if(Encontrado == 0){
			printf("\n Nodo no encontrado\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La lista se encuentra vacia\n");
	}
}

void MostrarLista(struct nodo *lista){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	if(primero!=NULL){
		while(actual != NULL){
			printf(" %d -> ", actual->dato);
			actual = actual->siguiente;
		}
		printf("NULL");
	}else{
		printf("\n La lista se encuentra vacia\n");
	}
}
