/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:BUSCAR MAYOR DE UN ARREGLO                          */ 
/*--------------------------------------------------------------*/



#include <stdio.h>
#include "LLAMADAS.h"

int buscarmayor(int array[])
{
	int mayor=array[0];
	for(int i=1;i<9;i++)
	{
		if(mayor<array[i])
		{
			mayor=array[i];
		}
	}
	return mayor;
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
void imprimirmayor(int mayor)
{
	printf("El número mayor del arreglo es: %d\n",mayor);
}

