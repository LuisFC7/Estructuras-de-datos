#include<stdio.h>
#include<stdlib.h>

void insertar();
void imprimir();
struct pila
{
	int datos;
	struct pila *siguiente;
};

struct pila *primero=NULL;
int main(void)
{
	int num;
	printf("Number of nodes: ");
	scanf("%d",&num);
	while(num--)
	{
		insertar();
		
	}	
	imprimir();
	
	system("pause");
	return 0;
}

void insertar()
{
	struct pila *nuevo=(struct pila*)malloc(sizeof(struct pila));
	printf("\n\tEnter data: ");
	scanf("%d",&nuevo->datos);
	nuevo->siguiente=primero;
	primero=nuevo;

}

void imprimir()
{
	
	struct pila *actual=(struct pila*)malloc(sizeof(struct pila));
	actual=primero;

	if(primero!=NULL)
	{
		while(actual!=NULL)
		{
			printf("%d",actual->datos);
			printf("\n");
			actual=actual->siguiente;

		}

	}else {
		printf("Is empty");
	}

}
