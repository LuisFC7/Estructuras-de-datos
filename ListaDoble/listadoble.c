#include "listadoble.h"
struct nodo *primero = NULL;
struct nodo *ultimo = NULL;

struct nodo *InsertarNodo(struct nodo *lista,int dato){
	struct nodo* nuevo = (struct nodo*)malloc(sizeof(struct nodo));
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
		return primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
		return ultimo;
	}

	printf("\n Nodo ingresado con exito\n\n");
}

void BuscarNodo(struct nodo *lista,int dato){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	int nodoBuscado = dato, encontrado = 0;


	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){

			if(actual->dato == nodoBuscado){
				printf("\n El nodo con el dato ( %d ) Encontrado\n\n", nodoBuscado);
				encontrado = 1;
			}

			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

struct nodo *ModificarNodo(struct nodo *lista,int dato){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	int nodoBuscado = dato, encontrado = 0;

	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){

			if(actual->dato == nodoBuscado){
				printf("\n El nodo con el dato ( %d ) Encontrado", nodoBuscado);
				printf("\n Ingrese el nuevo dato para este nodo: ");
				scanf("%d", &actual->dato);
				printf("\n Nodo modificado con exito\n\n");
				encontrado = 1;
			}
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
	return lista;
}

struct nodo *EliminarNodo(struct nodo *lista,int dato){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	struct nodo* anterior = (struct nodo*)malloc(sizeof(struct nodo));
	anterior = NULL;
	int nodoBuscado = dato, encontrado = 0;
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){

			if(actual->dato == nodoBuscado){

				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = NULL;
				}else if(actual==ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				printf("\n Nodo eliminado con exito\n\n");

				encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La lista se encuentra vacia\n");
	}
}

void MostrarListaIF(struct nodo *lista){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	if(primero!=NULL){
		while(actual != NULL){
			printf(" %d->", actual->dato);
			actual = actual->siguiente;
		}
	}else{
		printf("\n La lista se encuentra vacia\n");
	}
}

void MostrarListaFI(struct nodo *lista){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = ultimo;
	if(primero!=NULL){
		while(actual != NULL){
			printf("%d->", actual->dato);
			actual = actual->atras;
		}
	}else{
		printf("\n La lista se encuentra vacia\n");
	}
}
