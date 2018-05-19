/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:Convertir la cadena de caracteres previamente       */ 
/*inicializada en mayúsculas.                                   */
/*--------------------------------------------------------------*/



#include <stdio.h>
#include <ctype.h>

#include "LLAMADAS.h"

#define N 10

void imprimir(char array[])
{
	for(int i=0;i<N;i++)
		printf("%c\n",array[i]);
}

void convertir(char array[])
{
	for(int i=0;i<N;i++)
		array[i]=toupper(array[i]);
	
}
