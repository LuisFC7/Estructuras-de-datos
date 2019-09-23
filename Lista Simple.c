//Creacion de una lista simpleN
#include<stdio.h>
#include<stdlib.h>

void principal();
void insertar();
void imprimir();

struct Contigua
{
	int datos;
	struct Contigua *siguiente = NULL;
};

struct Contigua *primero = NULL;
struct Contigua *ultimo = NULL;

main()
{
	insertar();
	insertar();
	insertar();
	insertar();
	insertar();
	imprimir();
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
