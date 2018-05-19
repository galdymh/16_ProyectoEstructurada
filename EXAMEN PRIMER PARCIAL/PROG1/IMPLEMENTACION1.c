/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-04-2018                           */
/* Programa:calcular el indice de masa corporal de una persona. */
/*--------------------------------------------------------------*/


#include<stdio.h>
#include<math.h>
#include"LLAMADAS1.h"

float IMC(float x, float y)
{
	float imc;				
	imc=y/(x*x);					
        return imc;						
}

