#include "abb.h"
int main(void)
{
	struct Arbol *arbol = NULL;
	arbol = AgregarElemento(arbol,12);
	arbol = AgregarElemento(arbol,6);
	arbol = AgregarElemento(arbol,46);
	arbol = AgregarElemento(arbol,66);
	arbol = AgregarElemento(arbol,235);
	arbol = AgregarElemento(arbol,500);
	arbol = AgregarElemento(arbol,13);
	arbol = AgregarElemento(arbol,2);
	IN(arbol);

	BuscarElemento(arbol,66);

	EliminarElemento(arbol,46);
	IN(arbol);

printf("\n");
return 0;
}
