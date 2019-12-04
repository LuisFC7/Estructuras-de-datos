#include "listacircular.h"
int main(void){
	int menu = 0;
	int num = 0;
	do{
    struct nodo* primero = NULL;
    struct nodo* ultimo = NULL;
		printf("\n 1. Insertar       4. Eliminar");
		printf("\n 2. Buscar         5. Mostrar");
		printf("\n 3. Modificar      6. Salir");

		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
        printf(" Ingrese el dato que desea insertar: ");
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
				MostrarLista(primero);
				break;
			case 6:
				printf("\n\n Programa finalizado");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");
		}
	}while(menu != 6);
	return 0;
}
