/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:COPIA UN ARREGLO EN OTRO                            */
/*--------------------------------------------------------------*/



#include<stdio.h>
#include "LLAMADAS.h"

#define N 10


int main(void)
{
	float array[N], arraycop[N];

	/*LLENADO DEL ARREGLO*/
	llenadoMatriz(array);
	
	printf("\n\n");
	/*COPIANDO ARRAY EN ARRAYCOP*/
	
	copiararray(array, arraycop);
	
	/*IMPRIMIENDO EL PRIMER Y SEGUNDO ARREGLO*/
	
	imprimirarray(array, arraycop);
	
	return 0;
}


