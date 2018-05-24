/*----------------------------------------------------------------*/
/* Autor: Mendoza Hernández Galdina				  */
/* E-mail: galdymh@gmail.com                                      */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de secuencia de colores                */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{


        system("clear");  // Limpia toda la pantalla.           
        puts("");         // Haciendo salto de linea con puts(). 
        
        
        printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nM O D E L O S  D E   T E L E F O N O" _ARESET);
        printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");
        printf(_TAMARILLO _NEGRITA "\n\t1. Alta de modelos de celulares");
        printf(_TAMARILLO _NEGRITA "\n\t2. Lista de modelos");
        printf(_TAMARILLO _NEGRITA "\n\t3. Lista de modelos  Acendente");
        printf(_TAMARILLO _NEGRITA "\n\t4. Lista de modelos Descendente");
        printf(_TAMARILLO _NEGRITA "\n\t5. Buscar modelo");
        printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar modelo");
        printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar modelo");
        printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}


void mostrarEncabezadoTabla(void)
{
  printf(_NNEGRITA);
  
  printf("        \t MODELO \t |    MARCA       |         COLOR       |    COMPAÑIA    |    PRECIO    ");
  printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}



void mostrarModelo(Modelo modelo)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\t%s\t|\t%2.2s\t|", modelo.modelo, modelo.marca, modelo.color, modelo.compania, modelo.precio);
}




void detenerPantalla(void)
{
  char c;                           // Lee un caracter y valida el salto de linea para salir de la opcion. 
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  // Solicita un enter al usuario para reiniciar el menu principal 
  {}
}

