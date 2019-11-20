#include<stdio.h>
#include<stdlib.h>

void insertar();
void imprimir();
void eliminar();


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
	eliminar();
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

void eliminar()
{
	struct pila *actual=(struct pila*)malloc(sizeof(struct pila));
	actual=primero;
	struct pila *anterior=(struct pila*)malloc(sizeof(struct pila));
	anterior=NULL;

	int nodobuscado=0;
	int encontrado=0;

	printf("\nEnter data to delete: ");
	scanf("%d",&nodobuscado);

	if(primero!=NULL)
	{
		while(actual != NULL && encontrado !=1)
		{
			if(actual->datos == nodobuscado)
			{
				primero=primero->siguiente;
			}else {
				anterior->siguiente = actual->siguiente;
			}
			printf("\n\tNode was deleted\n");
			encontrado=1;

		}	

		anterior=actual;
		actual=actual->siguiente;
	}
	if(encontrado == 0)
	{
		printf("\n\tNodo was not found");
	}else{
		free(anterior);
	}


}
