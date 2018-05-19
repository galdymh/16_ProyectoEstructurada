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



#include<stdio.h>
#include"LLAMADAS3.h"


//Aqui implementas la función
float pagoAlberca(float a, float l, float n, float cm)

{
float PAG,V;

        V=a*l*n;					/*A la variable V se le asigna el valor de A*L*CM*/
	PAG=V*cm;					/*A la variable PAG se le asigna el valor de V*CM*/
	return PAG;
}

