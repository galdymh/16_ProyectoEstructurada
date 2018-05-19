/*-------------------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                                         */
/* Fecha:15-05-2018                                                        */
/* E-mail:galdymh@gmail.com                                                */
/* Fecha de actualización: 16-05-2018                                      */
/* Programa 3:La Conagua requiere determinar el pago que debe realizar     */
/* una persona por el total de metros cúbicos que consume de agua al llenar*/ 
/* una alberca. Realice un programa que permita determinar ese pago.       */
/* Analice el problema y contemple las siguientes variables:		   */
/*	-A: altura de la alberca                                           */
/*	-L: largo de la alberca                                            */
/*	-N: ancho de la alberca                                            */
/*	-CM: costo del metro cúbico                                        */
/*	-V: volumen de la alberca                                          */
/*	-PAG: pago a realizar por el consumo                               */
/*-------------------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>
#include "LLAMADAS3.h"



/*Declaración de la función principal*/
int main(void)
{
/*Declaración de función.*/
float A,L,N,CM,PAG;
	printf("Ingresa la altura de la alberca:\n");	/*Imprime en pantalla el mensaje:"Ingresa la altura de la alberca:"*/
	scanf("%f",&A);					/*Lee y guarda el valor introducido en la variable A*/
	printf("Ingresa el largo de la alberca:\n");	/*Imprime en pantalla el mensaje:"Ingresa el largo de la alberca:"*/
	scanf("%f",&L);					/*Lee y guarda el valor introducido en la variable L*/
	printf("Ingresa el ancho de la alberca:\n");	/*Imprime en pantalla el mensaje:"Ingresa el ancho de la alberca:"*/
	scanf("%f",&N);					/*Lee y guarda el valor introducido en la variable N*/
	printf("Ingresa el costo del metro cúbico:\n");	/*Imprime en pantalla el mensaje:"Ingresa el costo del metro cúbico:"*/
	scanf("%f",&CM);				/*Lee y guarda el valor introducido en la variable CM*/
	PAG=pagoAlberca(A,L,N,CM);
	printf("El total a pagar es:%.2f\n",PAG);	/*Imprime en pantalla el mensaje:"El total a pagar es:"*/
	return 0;					/*Términa la compilación de forma exitosa*/
}












	
	
