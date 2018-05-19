/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-04-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:Tabla de multiplicar del 1 al 9.                 	*/
/*--------------------------------------------------------------*/


#include<stdio.h>
#define N 5
#define M 10
#include "LLAMADAS5.h"

void TABLAMULT(int x, int y)

{
int i,j;
        for(i=1;i<=N;i++)
        {
                for(j=1;j<=M;j++)
                {
                printf("%d x %d = %d \n",i,j,i*j);
                }
        printf("\n\n");
      }
         
}
      
