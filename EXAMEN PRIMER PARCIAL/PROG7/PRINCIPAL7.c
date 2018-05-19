/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:15-04-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/* Programa:Buscar mayor y menor de tres números ingresados.     */
/*--------------------------------------------------------------*/

#include<stdio.h>
#define N 3

#include "LLAMADAS7.h"
int BuscarMayor(int v[]);
int BuscarMenor(int v[]);

int main()
{
int i, v[N],mayor,menor;
        for(i=0;i<N;i++)
        {
        printf("Ingrese el %d° número\n",i+1);
        scanf("%d",&v[i]);
        }
        mayor=BuscarMayor(v);
        menor=BuscarMenor(v);
        printf("El número mayor del arreglo es: %d\n",mayor);
        printf("El número menor del arreglo es: %d\n",menor);
        
        return 0;
}

        
