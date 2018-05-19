/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:BUSCAR MENOR DE UN ARREGLO                          */ 
/*--------------------------------------------------------------*/


#include<stdio.h>
#include "LLAMADAS.h"




int main(void)
{
	int array[]={5,9,4,7,3,8,5,2,4,3};
	int mayor;
	
	/*BUSQUEDA DEL NÚMERO MAYOR*/

	mayor=buscarmayor(array);
	
	/*IMPRECIÓN DEL ARREGLO*/
	
	imprimir(array);
	
	/*IMPRESIÓN DEL NÚMERO MAYOR*/
	
	imprimirmayor(mayor);
	

	return 0;
}
