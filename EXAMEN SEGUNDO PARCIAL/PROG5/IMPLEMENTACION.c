/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:BUSCAR MENOR DE UN ARREGLO                          */ 
/*--------------------------------------------------------------*/


#include <stdio.h>
#include "LLAMADAS.h"

int buscarmenor(int array[])
{
	int menor=array[0];
	for(int i=1;i<9;i++)
	{
		if(menor>array[i])
		{
			menor=array[i];
		}
	}
	return menor;
}

void imprimir(int array[])
{
	printf("Impresión del arreglo.\n\n\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
	
	printf("\n\n");
}
void imprimirmenor(int menor)
{
	printf("El número menor del arreglo es: %d\n",menor);
}

