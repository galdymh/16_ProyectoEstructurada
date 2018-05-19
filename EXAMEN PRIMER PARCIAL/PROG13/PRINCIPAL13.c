/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-04-2018                           */
/* Programa: SUMA DE LOS PRIMEROS 100 NÚMEROS PARES E IMPARES   */
/*--------------------------------------------------------------*/


#include<stdio.h>
#define N 100

#include "LLAMADAS13.h"

int main()
{
int par=0,impar=0;
        IMPRIMIR();
        par=PAR(par);
        impar=IMPAR(impar);
        printf("\nLAS SUMA DE LOS NUMEROS PARES ES %d \n",par);
        printf("\nLAS SUMA DE LOS NUMEROS IMPARES ES %d \n\n",impar);
        return 0;
}








