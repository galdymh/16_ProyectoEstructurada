/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 16-05-2018                           */
/* Programa:calcular el área de un rectangulo.  		*/
/*--------------------------------------------------------------*/

#include<stdio.h>
#include "LLAMADAS2.h"

int main(void)
{
int base,altura,area;

        printf("INGRESA LA BASE DEL RECTÁNGULO: ");
        scanf("%d",&base);
        printf("INGRESA LA ALTURA DEL RECTÁNGULO: ");
        scanf("%d",&altura);
        area=areaRectangulo(base,altura);
        printf("El ÁREA DEL RECTÁNGULO ES:%d\n",area);
        return 0;
}
      
