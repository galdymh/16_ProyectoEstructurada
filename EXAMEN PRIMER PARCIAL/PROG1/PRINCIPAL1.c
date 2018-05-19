/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-04-2018                           */
/* Programa:calcular el indice de masa corporal de una persona. */
/*--------------------------------------------------------------*/



#include<stdio.h>
#include<math.h>


#include "LLAMADAS1.h"




int main(void)
{
/*Declaración de variables*/
float h,p,imc;
	
	printf("Ingrese la altura en metros:\n");	/*imprime en pantalla:Ingrese la altura en metros:*/
	scanf("%f",&h);					/*lee el valor ingresado y lo almacena en h*/
	printf("Ingresa el peso en kg:\n");		/*imprime en pantalla:Ingrese el peso en kg:*/
	scanf("%f",&p);	
	imc=IMC(h,p);
	printf("El IMC es:%.2f\n",imc);	
	return 0;                                       //Términa la compilación de forma exitosa
}
	
	
	
	
