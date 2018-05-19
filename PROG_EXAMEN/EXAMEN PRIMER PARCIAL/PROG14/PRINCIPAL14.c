/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-04-2018                           */
/* Programa: FACTORIAL DE UN NÚMERO                             */
/*--------------------------------------------------------------*/



#include<stdio.h>

#include "LLAMADAS14.h"

int main()
{


int fact,n;
        printf("INGRESE EL NÚMERO DEL FACTORIAL A CALCULAR: ");
        scanf("%d",&n);
        fact=Factorial(n);
        printf("%d!= %d\n",n,fact);
        return 0;
}


