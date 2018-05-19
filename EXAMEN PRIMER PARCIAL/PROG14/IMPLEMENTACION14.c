/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-04-2018                           */
/* Programa: FACTORIAL DE UN NÚMERO                             */
/*--------------------------------------------------------------*/



#include<stdio.h>
#include "LLAMADAS14.h"


int Factorial(int x)
{
int i,fact=1;
        for(i=1;i<x;i++)
               {
                 fact=fact*(i+1);
                }
         return fact;
}
