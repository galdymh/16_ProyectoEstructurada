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


int main(void)
{
	char array[N]={"ABCDEFGHIJ"};
	
	imprimir(array);
	convertir(array);
	printf("\n\n");
	imprimir(array);

	return 0;
}


