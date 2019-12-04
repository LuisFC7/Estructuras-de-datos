#include "pila.h"
int main(){
	int opcionMenu = 0;
	int dato = 0;
	do{
		struct nodo *primero = NULL;
		struct nodo *ultimo = NULL;
		printf("PILA");
		printf("\n1-insertar\n");
		printf("\n2-Buscar\n");
		printf("\n3-Eliminar\n");
		printf("\n4-imprimir\n");
		printf("\n5-Salir");
		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &opcionMenu);
		switch(opcionMenu){
			case 1:
				printf("\ningrese el valor\n");
				scanf("%d",&dato );
				primero = insertarNodo(primero,dato);
				break;
			case 2:
				printf("\ningrese el dato a buscar \n");
				scanf("%d",&dato );
				buscarNodo(primero, dato);
				break;

			case 3:
				printf("\nsse relizo el pop\n");
				eliminarNodo(ultimo, dato);
				break;
			case 4:

				imprimirPila(primero);
				break;
			case 5:
				printf("\n\n Programa finalizado.");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");
		}
	}while(opcionMenu != 5);
	return 0;
}
