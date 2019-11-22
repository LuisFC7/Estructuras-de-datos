#include<stdio.h>
#include<stdlib.h>


void insertar();
void imprimiruno();
void imprimirdos();
void eliminar();


struct doble
{
	int datos;
	struct doble *siguiente;
	struct doble *atras;


};

struct doble *primero=NULL;
struct doble *ultimo=NULL;

int main(void)
{
	int num;
	printf("\n\tNumber of nodes: ");
	scanf("%d",&num);

	while(num--)
	{	
		insertar();

	}
	
	imprimiruno();
	printf("\n*****");
	imprimirdos();
	eliminar();
	imprimiruno();
	printf("\n");
	imprimirdos();
	
	return 0;
}

void insertar()
{
	struct doble *nuevo=(struct doble*)malloc(sizeof(struct doble));
	printf("\n\tEnter data: ");
	scanf("%d",&nuevo->datos);

	if(primero==NULL)
	{ 
		primero=nuevo;
		primero->siguiente=NULL;
		primero->atras=NULL;
		ultimo=primero;

	}else{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->atras=ultimo;
		ultimo=nuevo;
		
	}

	


}

void imprimiruno()
{
	struct doble *actual=(struct doble*)malloc(sizeof(struct doble));
	actual=primero;

	if(primero!=NULL)
	{
		while(actual!=NULL)
		{
			printf("\n%d",actual->datos);
			actual=actual->siguiente;

		}

	}else{
		printf("List is empty");
	}


}


void imprimirdos()
{
	struct doble *actual=(struct doble*)malloc(sizeof(struct doble));
	actual=ultimo;
	
	if(primero!=NULL)
	{
			while(actual!=NULL)
			{	
				printf("\n%d",actual->datos);
				actual=actual->atras;

			}


	}else{
		printf("\nList is empty");

	}




}

void eliminar()
{

	struct doble *actual=(struct doble*)malloc(sizeof(struct doble));
	actual=primero;

	struct doble *anterior=(struct doble*)malloc(sizeof(struct doble));
	anterior=NULL;

	int nodobuscado=0;
	int encontrado=0;

	printf("\n\tEnter node to delete: ");
	scanf("\n%d",&nodobuscado);

	if(primero!=NULL)
	{
		while(actual!=NULL && encontrado != 1)
		{	
			
			if(actual->datos == nodobuscado)
			{
				if(actual==primero)
				{
					primero=primero->siguiente;
					primero->atras=NULL;
				}else if(actual==ultimo)
					{
						anterior->siguiente=NULL;
						ultimo=anterior;

					}else {

						anterior->siguiente=actual->siguiente;
						actual->siguiente->atras=anterior;

						}
					printf("\nNode was eliminated");

					encontrado=1;
			}
			anterior=actual;
			actual=actual->siguiente;


		}
		if(encontrado==0)
		{
			printf("\nNodo was not found");



		}else{

			free(anterior);
		}


	}


}
