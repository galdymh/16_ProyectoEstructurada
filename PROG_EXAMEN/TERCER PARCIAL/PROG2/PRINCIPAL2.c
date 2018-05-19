/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-04-2018                           */
/* Programa:CALCULAR LA SUMA DE LOS PRIMEROS n NÚMEROS.         */
/*--------------------------------------------------------------*/


#include<stdio.h>
#include "LLAMADAS2.h"



int main()
{
int sum=0,N;
        printf("INGRESA LA SUMA DEL NÚMERO QUE DESEA CALCULAR: \n");
        scanf("%d",&N);
        sum=SUMA(N);
        printf("LA SUMA DE LOS PRIMEROS n NÚMEROS ES: %d\n",sum);
return 0;
}




