/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-04-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:Elabore un programa que imprima los números del 100 */
/*al cero, en orden decreciente.                               	*/
/*--------------------------------------------------------------*/



#include<stdio.h>
#include "LLAMADAS8.h"
# define N 100

void Decreciente()
{
int i;

        for(i=N;i>-1;i--)
        { 
        printf("%d ",i);
        }
        printf("\n");
 }
