#include<stdio.h>
#include<stdlib.h>

void principal();
void insertar();
void imprimiro();
void imprimira();

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
