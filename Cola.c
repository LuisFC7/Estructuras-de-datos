#include<stdio.h>
#include<stdlib.h>


void insertar();
void imprimir();

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
		while(actual != NULL)
		{
			printf("\n %d",actual->datos);
			actual=actual->siguiente;
		}
	}else{
		printf("\nIs empty");
	}



}


