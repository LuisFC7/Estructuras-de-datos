#include "lista_simple.h"

int main(void){
	int opcionMenu = 0;
	int num=0;
	do{
		struct nodo *primero =NULL;
		struct nodo *ultimo =NULL;
		printf("\nLISTA SIMPLE");
		printf("\n1. Insertar     4. Eliminar");
		printf("\n2. Buscar       5. Mostrar");
		printf("\n3. Modificar    6. Salir ");

		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &opcionMenu);
		switch(opcionMenu){
			case 1:
			printf(" Ingrese el dato que contendra el nuevo Nodo: ");
			scanf("%d", &num);
			InsertarNodo(primero,num);
			break;
			case 2:
			printf(" Ingrese el dato que desea buscar: ");
			scanf("%d", &num);
			BuscarNodo(primero,num);
			break;
			case 3:
			printf(" Ingrese el dato que desea modificar ");
			scanf("%d", &num);
			ModificarNodo(primero,num);
			break;
			case 4:
			printf("\n\n ELIMINAR UN NODO DE LA LISTA \n\n");
			printf(" Ingrese el dato de el Nodo a eliminar : ");
			scanf("%d", &num);
			EliminarNodo(primero,num);
			break;
			case 5:
			printf("\n\n DESPLEGAR LISTA DE NODOS \n\n");
			MostrarLista(primero);
			break;
			case 6:
			printf("\n\n Programa finalizado...");
			break;
			default:
			printf("\n\n Opcion No Valida \n\n");
		}
	}while(opcionMenu != 6);
	return 0;
}
