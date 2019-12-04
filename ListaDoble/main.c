#include "listadoble.h"
int main(void){
	int menu = 0;
	int num = 0;
	do{
		struct nodo *primero = NULL;
		struct nodo *ultimo = NULL;
		printf("\n 1. Insertar       5. Mostrar inico al final ");
		printf("\n 2. Buscar         6. Mostrar final al inicio ");
		printf("\n 3. Modificar      7. Salir ");
		printf("\n 4. Eliminar ");
		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &menu);
		switch(menu){
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
        printf(" Ingrese el dato que desea modificar: ");
				scanf("%d", &num);
				ModificarNodo(primero,num);
				break;
			case 4:
				printf(" Ingrese el dato que desea eliminar : ");
        scanf("%d", &num);
				EliminarNodo(primero,num);
				break;
			case 5:
				MostrarListaIF(ultimo);
				break;
			case 6:
				MostrarListaFI(primero);
				break;
			case 7:
				printf("\n\n Programa finalizado");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");
		}
	}while(menu != 7);
	return 0;
}
