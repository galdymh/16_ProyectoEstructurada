/*----------------------------------------------------------------*/
/* Autor: Mendoza Hernández Galdina				  */
/* E-mail: galdymh@gmail.com                                      */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de secuencia de colores                */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   //En este archivo se definen las secuencia para los colores            
#include "enums.h"                     // En este archivo se definen los enums para los menus                 
#include "prototipofunciones.h"        // En este archivo se definen todos los prototipos de funciones        

                                                   

int numModelos;                        // Variable global: se define aqui en el main, pero se utiliza,        
                                            

int main(void)
{
        Modelo listaModelo[TAM_MODELO];    //Declaracion de una variable de arreglo de estructura modelo[]      
	int opcion;                        //Variable que controla las opciones del menu principal.               

	do
	{
        menuPrincipal();         //Se llama (invoca) a la funcion menuPrincipal() implementada en operacionespantalla.c
                                                     

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		
		{
	case CREAR:
		
                while(getchar() != '\n');      // Limpiar el buffer en caso de tener almacenado el salto de linea.
                printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     Modelos de celulares\n\n");
                printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de modelos de celulares: " _TVERDE);
		scanf("%d",&numModelos);
		printf("\n\n" _ARESET);
                
                
                for(int i = 0; i < numModelos; i++)
		
		{
                
                      while(getchar() != '\n');      // Limpiar el buffer en caso de tener almacenado el salgo de linea                
                      listaModelo[i] = crearNuevoModelo();// Se invoca a la funcion crearNuevoModelo() implementada en operacionesModelo.c  
                
                }
                
                        while(getchar() != '\n');         /* Limpiar el buffer en caso de tener almacenado el salto de linea */
                        detenerPantalla();              /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
	        break;
	        

        case LISTAR:
	        
	        while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
		printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    M O D E L O S\n\n");
                mostrarListaModelo(listaModelo, 0);      // Se invoca a la funcion mostrarModelo() implementada en operacionesModelo.c     
		detenerPantalla();                      // Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
		
		break;
		

	case LISTAR_ASC:
		
		while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
		printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
                mostrarListaModelo(listaModelo, 1);      // Se invoca a la funcion mostrarModelo() implementada en operacionesModelo.c    
		detenerPantalla();                       // Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c 
		
		break;
		
		
        case LISTAR_DES:
                
		while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
		printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
                mostrarListaModelo(listaModelo, 2);      // Se invoca a la funcion mostrarModelo() implementada en operacionesModelo.c    
		detenerPantalla();                       // Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c 
		
		break;
		
		
        case BUSCAR:
        
		while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
		printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
                buscarModelo(listaModelo);               // Se invoca a la funcion mostrarModelo() implementada en operacionesModelo.c     
		detenerPantalla();                       // Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c 
		
		break;
		
		
        case ACTUALIZAR:
        
	        while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
		printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
                actualizarModelo(listaModelo);           // Se invoca a la funcion mostrarModelo() implementada en operacionesModelo.c  
                while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
		detenerPantalla();                       // Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c 
		
		break;
		
		
        case ELIMINAR:
        
		while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
		printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
                eliminarModelo(listaModelo);            // Se invoca a la funcion mostrarModelo() implementada en operacionesModelo.c
		detenerPantalla();                      /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
		
		break;
		
		
        case SALIR:
        
		system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
		exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	        }
	        while(opcion != SALIR);
	        
        return 0;
}

