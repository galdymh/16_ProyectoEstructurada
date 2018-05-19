/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:COPIA UN ARREGLO EN OTRO                            */
/*--------------------------------------------------------------*/


#include <stdio.h>
#include "LLAMADAS.h"


#define N 10

void llenadoMatriz(float array[])
{
	/*LLENADO DEL ARREGLO UNIDIMENCIONAL*/
	for(int i=0;i<N;i++)
	{
		printf("Escribe el %d° número: ",i+1);
		scanf("%f", &array[i]);
	}
}

void copiararray(float array[], float arraycop[])
{
	for(int i=0;i<N;i++)
	{
		arraycop[i]=array[i];
	}
}

void imprimirarray(float array[], float arraycop[])
{
	printf("IMPRESIÓN DEL PRIMER ARREGLO\n\n");
	for(int i=0;i<N;i++)
	{
		printf("array[%d]= %.1f\n",i,array[i]);
	}
	
	printf("\n\n");
	
	printf("IMPRESIÓN DEL SEGUNDO ARREGLO\n\n");
	for(int i=0;i<N;i++)
	{
		printf("arraycopia[%d]= %.1f\n",i,arraycop[i]);
	}
}
