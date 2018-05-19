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

int main()
{
int n;
        printf("INGRESE UN NÚMERO\n");
        scanf("%d",&n);
        ParImpar(n);
       
        return 0;
}


