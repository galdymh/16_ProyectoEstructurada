/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-04-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:Pedir al usuario que ingrese un número y mostrar   	*/ 
/* en pantalla si dicho número es par  o impar, positivo o negativo*/
/*--------------------------------------------------------------*/



#include<stdio.h>
#include "LLAMADAS9.h"

void ParImpar(int x)
{
         if(x>=0)
        {
        printf("EL NÚMERO ES POSITIVO ");
                if(x%2==0)
                printf("Y ES PAR.\n");
                else
                printf("Y ES IMPAR.\n");
        }
         if(x<0)
        {
        printf("EL NÚMERO ES NEGATIVO ");
                if(x%2==0)
                printf("Y ES PAR.\n");
                else
                printf("Y ES IMPAR.\n");
        }
}
