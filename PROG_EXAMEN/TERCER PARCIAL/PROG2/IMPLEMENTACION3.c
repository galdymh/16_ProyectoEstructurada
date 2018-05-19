/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-04-2018                           */
/* Programa:CALCULAR LA SUMA DE LOS PRIMEROS n NÚMEROS AL CUADRADO.         */
/*--------------------------------------------------------------*/


#include<stdio.h>
#include "LLAMADAS3.h"


int SUMA(int x)
{
int sum;
        
        sum=(x*(x+1)*(2*x+1))/6;
        return sum;
}


