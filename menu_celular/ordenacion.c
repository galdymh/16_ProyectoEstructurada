/*----------------------------------------------------------------*/
/* Autor: Mendoza Hernández Galdina				  */
/* E-mail: galdymh@gmail.com                                      */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de secuencia de colores                */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numModelos;

int * ordenarAscendente(Modelo listaModelo[], int arrayTemp[])


{
  for(int i = 0; i < numModelos; i++)
  {
    for(int j = i + 1; j < numModelos; j++)
    {
      if(strcmp(listaModelo[arrayTemp[i]].modelo, listaModelo[arrayTemp[j]].modelo) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Modelo listaModelo[], int arrayTemp[])
{
  for(int i = 0; i < numModelos; i++)
  {
    for(int j = i + 1; j < numModelos; j++)
    {
      if(strcmp(listaModelo[arrayTemp[i]].modelo, listaModelo[arrayTemp[j]].modelo) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}

