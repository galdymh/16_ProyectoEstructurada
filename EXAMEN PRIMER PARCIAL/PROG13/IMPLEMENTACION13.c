/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-04-2018                           */
/* Programa: SUMA DE LOS PRIMEROS 100 NÚMEROS PARES E IMPARES   */
/*--------------------------------------------------------------*/




#include<stdio.h>
#include"LLAMADAS13.h"


void IMPRIMIR()

{
int i;
        printf("\n\n");
        for(i=1;i<=N;i++)
        {
        printf("%d ",i);
        }
        printf("\n\n");
}

int PAR(int x)
{
int par,i;
        for(i=1;i<=N;i++)
        if(i%2==0)
        {
        par=par+i;
        }
        return par;
}


int IMPAR(int y)
{
int impar,i;
        for(i=1;i<=N;i++)
        if(i%2!=0)
        {
        impar=impar+i;
        }
        return impar;
}
