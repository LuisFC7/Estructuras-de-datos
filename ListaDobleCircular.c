#include<stdio.h>
#include<stdlib.h>

void principal();
void insertar();
void imprimiro();
void imprimira();
void buscar();
void eliminar();
struct circular
{

	int datos;
	struct circular *siguiente;
	struct circular *atras;
};

struct circular *primero=NULL;
struct circular *ultimo=NULL;




int main(void)
{
	int num;
	printf("Number of nodes: ");
	scanf("%d",&num);
	while(num--)
	{
		insertar();
	}

	imprimiro();
	printf("\n*****");
	imprimira();
	buscar();
	eliminar();
	imprimiro();
	imprimira();
		
	system("pause");
	return 0;
}

void insertar()
{
	struct circular *nuevo=(struct circular*)malloc(sizeof(struct circular));

	printf("\nEnter data: ");
	scanf("%d",&nuevo->datos);

	if(primero==NULL)
	{
		primero=nuevo;
		primero->siguiente=NULL;
		primero->atras=NULL;
		ultimo=primero;
	}
	else{

		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->atras=ultimo;
		ultimo=nuevo;

	}


}


void imprimiro()
{
	struct circular *actual=(struct circular*)malloc(sizeof(struct circular));

	actual=primero;

	if(primero!=NULL)
	{
		while(actual != NULL)
		{
			printf("\n%d",actual->datos);
			actual=actual->siguiente;
		}


	}else{
		printf("\n\tLit is empty");
		

	}


}

void imprimira()
{
	struct circular *actual=(struct circular*)malloc(sizeof(struct circular));
	actual=ultimo;
	
	if(primero!=NULL)
	{
		while(actual != NULL)
		{
			printf("\n %d",actual->datos);
			actual=actual->atras;
		}

	}else{
		printf("\n\tList is empty");

	}



}

void buscar()
{
	struct circular *actual=(struct circular*)malloc(sizeof(struct circular));

	actual=primero;
	int nodobuscado=0;
	int encontrado=0;

	printf("\nEnter node to search");
	scanf("%d",&nodobuscado);

	if(primero!=NULL)
	{
		do{
			if(actual->datos == nodobuscado)
			{

			printf("\nNode with data %d was found\n\n", nodobuscado);
			encontrado=1;

			}

			actual=actual->siguiente;


		}while(actual!=primero && encontrado !=1);

		if(encontrado == 0)
		{
			printf("\nNodo was not found");
		}
		
	}else{
		printf("\n\tList is empty");
	}




}

void eliminar()
{
	struct circular *actual=(struct circular*)malloc(sizeof(struct circular));
	actual=primero;

	struct circular *anterior=(struct circular*)malloc(sizeof(struct circular));
	anterior=NULL;

	int nodobuscado=0;
	int encontrado=0;

	printf("\n\tEnter data to delete: ");
	scanf("%d",&nodobuscado);

	if(primero!=NULL)
	{

		do{
			if(actual->datos == nodobuscado)
			{



			if(actual==primero)
			{
				primero=primero->siguiente;
				primero->atras=ultimo;
				ultimo->siguiente=primero;

			}else if(actual==ultimo)
				{
					ultimo=anterior;
					ultimo->siguiente=primero;
					primero->atras=ultimo;



				}else{

					anterior->siguiente=actual->siguiente;
					actual->siguiente->atras=anterior;
				}
			printf("\n\tNodo was deleted");
			encontrado=1;

			}
			anterior=actual;
			actual=actual->siguiente;

			
		}while(actual!=primero && encontrado != 1);

		if(encontrado == 0)
		{
			printf("\n\tNode was not found");
			
		}else {
			free(anterior);
		}
	
	}
}
