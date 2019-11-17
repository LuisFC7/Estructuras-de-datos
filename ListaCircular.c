//lista circular

#include<stdio.h>
#include<stdlib.h>

void principal();
void insertar();
void imprimir();
void buscar();

struct circular
{
	int datos;
	struct circular *siguiente; 
};

struct circular *primero = NULL;
struct circular *ultimo = NULL;

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
	system("pause");
	return 0;
}

void insertar()
{
	//1.- Reservate memory to create the first node
	struct circular *nuevo=(struct circular*)malloc(sizeof(struct circular));
	printf("\n\tEnter data: ");
	//2. Data is gonna be saved on field "datos"
	scanf("%d",&nuevo->datos);
	
	/* primero=5;  ultimo=7;
	 5->7->5
	nuevo=7;   
	siguiente;
	ultimo=7;
	
*/	
	//3. We have to know if list has been created
	//first data gonna point to first.
	if(primero==NULL)
	{
		primero=nuevo;
		primero->siguiente=primero;
		ultimo=primero;
		
	}else
	{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=primero;
		ultimo=nuevo;
	}

}

void imprimir()
{
	struct circular *actual=(struct circular*)malloc(sizeof(struct circular));
	actual=primero;
	
	if(primero!=NULL)
	{
		do
		{
			printf("%d -> ",actual->datos);
			actual=actual->siguiente;
				
		}while(actual!=primero);
	}
	else
	{
		printf("\nList is empty");
	}
	
}

void buscar()
{
	struct circular *actual=(struct circular*)malloc(sizeof(struct circular));
	actual=primero;
	int encontrado=0;
	int nodobuscado = 0;
	printf("\n\tEnter data to search");
	scanf("%d",&nodobuscado);

	if(primero!=NULL)
	{
		do{
			if(actual->datos==nodobuscado)
			{
				printf("\nNodo was found");
				encontrado=1;
			}

			actual=actual->siguiente;
		}while(actual!=primero && encontrado!=1);
		
			if(encontrado!=1)
			{
				printf("\n\tNodo was not found");
			}

	}else{
		printf("\n\tList is Empty");

		}
}
