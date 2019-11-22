#include<stdio.h>
#include<stdlib.h>


void insertar();
void imprimir();
void eliminar();

struct cola
{
	int datos;
	struct cola *siguiente;
};

struct cola *primero=NULL;
struct cola *ultimo=NULL;	

int main(void)
{
	int num;
	printf("\n\tNumber of nodes: ");
	scanf("%d",&num);

	while(num--)
	{
	  	insertar();
	}
	imprimir();
	eliminar();
	imprimir();
	return 0;

}

void insertar()
{
		struct cola *nuevo=(struct cola*)malloc(sizeof(struct cola));
		printf("\nEnter data: ");
		scanf("%d",&nuevo->datos);

		if(primero==NULL)
		{
			primero=nuevo;
			primero->siguiente=NULL;
			ultimo=nuevo;

		}else {
			ultimo->siguiente=nuevo;
			primero->siguiente=NULL;
			ultimo=nuevo;
		}

}

void imprimir()
{
	struct cola *actual=(struct cola*)malloc(sizeof(struct cola));
	actual=primero;

	if(primero!=NULL)
	{
		while(actual!=NULL)
		{
			printf("\n%d",actual->datos);
			actual=actual->siguiente;

		}

	}else{
		printf("\nIs empty");

	}
}


void eliminar()
{
	struct cola *actual=(struct cola*)malloc(sizeof(struct cola));
	actual=primero;
	
	struct cola *anterior=(struct cola*)malloc(sizeof(struct cola));
	anterior=NULL;

	int nodobuscado=0;
	int encontrado=0;
	
	printf("\n\tEnter node to delete: ");
	scanf("%d",&nodobuscado);

	if(primero!=NULL)
	{
		
		while(actual!= NULL && encontrado!=1)
		{
			if(actual->datos == nodobuscado)
			{
				if(actual==primero)
				{
					primero=primero->siguiente;

				}else if(actual==ultimo)
					{
					anterior->siguiente=NULL;
					ultimo=anterior;
	
					}else{
			
						anterior->siguiente=actual->siguiente;
	
						}
				encontrado=1;
			}
			
			anterior=actual;
			actual=actual->siguiente;
		}

		if(encontrado==0)
		{
			printf("\n\tNodo was not found");
		}else{
			free(anterior);
		}

	}

}	
