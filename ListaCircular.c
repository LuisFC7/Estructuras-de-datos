//lista circular

#include<stdio.h>
#include<stdlib.h>

void principal();
void insertar();
void imprimir();

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
		printf("\List is empty");
	}
	
}

