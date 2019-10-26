//Creacion de una lista simple
#include<stdio.h>
#include<stdlib.h>

void principal();
void insertar();
void imprimir();
void buscar();
void eliminar();

struct Contigua
{
	int datos;
	struct Contigua *siguiente; 
};

struct Contigua *primero = NULL;
struct Contigua *ultimo = NULL;

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
	buscar();
	printf("\n");
	eliminar();
	system("pause");
	return 0;
}

void insertar()
{
	//1.- Reservate memory to create the first node
	struct Contigua *nuevo=(struct Contigua*)malloc(sizeof(struct Contigua));
	printf("\n\tEnter data: ");
	//2. Data is gonna be saved on field "datos"
	scanf("%d",&nuevo->datos);
	
	//3. We have to know if list has been created
	if(primero==NULL)
	{
		primero=nuevo;
		primero->siguiente=NULL;
		ultimo=nuevo;
		
	}else
	{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		ultimo=nuevo;
	}

}

void imprimir()
{
	struct Contigua *actual=(struct Contigua*)malloc(sizeof(struct Contigua));
	actual=primero;
	
	if(primero!=NULL)
	{
		while(actual!=NULL)
		{
			printf("%d\n",actual->datos);
			actual=actual->siguiente;
		}
	}else
	{
		printf("List is Empty");
	}
}

void buscar()
{
	struct Contigua *actual=(struct Contigua*)malloc(sizeof(struct Contigua));
	actual=primero;
	
	int snode=0;
	int found=0;
	
	printf("Enter node to search: ");
	scanf("%d",&snode);
	
	if(primero!=NULL)
	{
		while(actual!=NULL && found!=1)
		{
			if(actual->datos==snode)
			{
				found=1;
			}
			else
			{
				found=0;
			}
			
			//Update node
			actual=actual->siguiente;
		}
		if(found==1)
			printf("Node was found");
			else
			printf("Node was not found");
		
	}else
		printf("List is Empty");
		
}

void eliminar()
{
	struct Contigua *actual=(struct Contigua*)malloc(sizeof(struct Contigua));
	actual=primero;
	
	struct Contigua *anterior=(struct Contigua*)malloc(sizeof(struct Contigua));
	anterior=NULL;
	
	int snode=0;
	int found=0;	
	printf("Enter node to delete: ");
	scanf("%d",&snode);
	
	if(primero!=NULL)
	{
		while(actual!=NULL && found!=1)
		{
			if(actual->datos==snode)
			{
				//Cases
				if(actual==primero)
				{
					primero=primero->siguiente;
				}else if(actual==ultimo)
				{
					anterior->siguiente=NULL;
				}else 
				{
					anterior->siguiente=actual->siguiente;
				}
				
				printf("Node was deleted\n");
				found=1;
			}
			
			//Update node
			anterior=actual;
			actual=actual->siguiente;
		}
	
			if(found==1)
			{
				free(anterior);
			}
			else
			printf("Node was not found");
			
	}else
	{
		printf("List is Empty");
	}
}

