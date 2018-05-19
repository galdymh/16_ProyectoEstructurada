/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/*Escriba un programa que permita crear un arreglo bidimensional*/
/*de tipo int, de tamaño [5][5](8%).                            */
/*1. Inicializar dicho arreglo en la propia declaración.        */
/*2. Obtener la suma de los valores de cada posición, donde la  */ 
/*posición fila y columna sean iguales.                         */
/*3. Mostrar en pantalla el valor de la suma.                   */
/*--------------------------------------------------------------*/


#include<stdio.h>
#include "LLAMADAS.h"



#define N 5
#define M 5



int main(void)
{
	int Mat[N][M]={{1,2,3,4,5},
			   {1,2,3,4,5},
			   {1,2,3,4,5},
			   {1,2,3,4,5},
			   {1,2,3,4,5}};
	int sum;
	
	sum=sumamat(Mat);
	
	imprimir(sum);

	return 0;
}



