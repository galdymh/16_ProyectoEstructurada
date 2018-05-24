/*----------------------------------------------------------------*/
/* Autor: Mendoza Hernández Galdina				  */
/* E-mail: galdymh@gmail.com                                      */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de secuencia de colores                */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>


#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numModelos;



Modelo crearNuevoModelo(void)
{
         Modelo modelo;
         

        printf(_TBLANCO _NEGRITA "Introduce el modelo del celular: "_NNEGRITA _TVERDE); 
        fgets(modelo.modelo, TAM_MODELO, stdin);            //Solicita el modelo del celular al usuario                  
        strcpy(modelo.modelo, strtok(modelo.modelo, "\n"));// Elimina el salto de linea '\n' que genera fgets() 
        
        

        printf(_TBLANCO _NEGRITA "Introduce la marca del celular : "_NNEGRITA _TVERDE);
        fgets(modelo.marca, TAM_MARCA, stdin);                          // Solicita la marca del celular al usuario.
        strcpy(modelo.marca, strtok(modelo.marca, "\n"));              //Elimina el salto de linea '\n' que genera fgets() 



        printf(_TBLANCO _NEGRITA "Introduce el color del celular: " _NNEGRITA _TVERDE);
        fgets(modelo.color, TAM_COLOR, stdin);             //Solicita el color del celular al usuario        
        strcpy(modelo.color, strtok(modelo.color, "\n")); //Elimina el salto de linea '\n' que genera fgets    
  
  
  
        printf(_TBLANCO _NEGRITA "Introduce la compañia del celular: "_NNEGRITA _TVERDE);
        fgets(modelo.compania, TAM_MODELO, stdin);                    //Solicita el modelo del celular al usuario 
        strcpy(modelo.compania, strtok(modelo.compania, "\n"));	     //Elimina el salto de linea '\n' que genera fgets() 



        printf(_TBLANCO _NEGRITA "Introduce el precio del celular : "_NNEGRITA _TVERDE);
        fgets(modelo.precio, TAM_MARCA, stdin);                           //Solicita la marca del  celular al usuario       
        strcpy(modelo.precio, strtok( modelo.precio, "\n"));             // Elimina el salto de linea '\n' que genera fgets() 

 
         printf("\n\n");
        return modelo;
}




void mostrarListaModelo(Modelo listaModelo[], int ordenar)
{

          int arrayTemp[numModelos];
          
          
          for(int i = 0; i < numModelos; i++)
          {
            arrayTemp[i] = i;
          }
          if(ordenar == 1)            //ordenacion ascendente  
          {
            memcpy(arrayTemp, ordenarAscendente(listaModelo, arrayTemp), sizeof(arrayTemp));   //memcpy: permite compiar un arreglo a otro 
          } else if(ordenar == 2){    //2: ordenacion descendente 
            memcpy(arrayTemp, ordenarDescendente(listaModelo, arrayTemp), sizeof(arrayTemp));  // memcpy: permite compiar un arreglo a otro 
          }
          mostrarEncabezadoTabla();
          for(int i = 0; i < numModelos; i++)
          {
          mostrarModelo(listaModelo[arrayTemp[i]]);
          printf("\n");
  }
}



void buscarModelo(Modelo listaModelo[])
{


          int opcionBuscar;
          char nombreBuscar[TAM_MODELO];        // Almacena el nombre a buscar dentro de la estructura                
	  char marcaBuscar[TAM_MARCA];         //Almacena la matricula a buscar dentro de la estructura             


          printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R    C E L U L A R\n\n");
          printf(_TCYAN     _NEGRITA "Buscar modelo  de celulares de  por:\n\n");
          printf(_TBLANCO   _NEGRITA "\t1. Modelo\n");
          printf(_TBLANCO   _NEGRITA "\t2. Marca \n\n");
          printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
          scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
   
            case _xModelos:
            
            
            
                while(getchar() != '\n');     //Limpiar el buffer en caso de tener almacenado el salto de linea 
                printf(_TCYAN _NEGRITA "\n\nIngrese el modelo del celular: ");
                fgets(nombreBuscar, TAM_MODELO, stdin);
                strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));
                        
                for(int i = 0; i < numModelos; i++)
                if(strcmp(nombreBuscar, listaModelo[i].modelo) == 0)
                {
                  mostrarEncabezadoTabla();
                  mostrarModelo(listaModelo[i]);
                }
           break;



              case _xMarca:
              
              
              
                  while(getchar() != '\n');     // Limpiar el buffer en caso de tener almacenado el salto de linea.
                  printf(_TCYAN _NEGRITA "\n\nIntroduce la marca  del celular: ");
                  fgets(marcaBuscar, TAM_MODELO, stdin);
                  strcpy(marcaBuscar, strtok(marcaBuscar, "\n"));

                  for(int i = 0; i < numModelos; i++)
                  if(strcmp(marcaBuscar, listaModelo[i].marca) == 0)
                  {
                    mostrarEncabezadoTabla();
                    mostrarModelo(listaModelo[i]);
                  }
          break;
  }
}



void actualizarModelo(Modelo listaModelo[])
{


                int opcionBuscar;
                char modeloBuscar[TAM_MODELO];        //Almacena el nombre a buscar dentro de la estructura                
                char marcaBuscar[TAM_MARCA];         //Almacena la matricula a buscar dentro de la estructura             
                

                printf(_TCYAN     _NEGRITA "Buscar el modelo a actualizar por:\n\n");
                printf(_TBLANCO   _NEGRITA "\t1. Modelo\n");
                printf(_TBLANCO   _NEGRITA "\t2. Marca \n\n");
                printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
                scanf("%d", &opcionBuscar);
        
        

        switch(opcionBuscar)
        {
        
        
        
                case _xModelos:
              
              
              
              
                  while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
                  printf(_TCYAN _NEGRITA "\n\nIntroduce el Modelo: ");
                  fgets(modeloBuscar, TAM_MODELO, stdin);
                  strcpy(modeloBuscar, strtok(modeloBuscar, "\n"));

                  for(int i = 0; i < numModelos; i++)
                  {
                  if(strcmp(modeloBuscar, listaModelo[i].modelo) == 0)
                      {
                       mostrarEncabezadoTabla();
                       mostrarModelo(listaModelo[i]);

                       printf("\n\n");

                       listaModelo[i] = crearNuevoModelo();
                       mostrarEncabezadoTabla();
                       mostrarModelo(listaModelo[i]);

                  break;
              }
          }
          break;




              case _xMarca:
              
              
              
              
                  while(getchar() != '\n');     // Limpiar el buffer en caso de tener almacenado el salto de linea 
                  printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
                  fgets(marcaBuscar, 50, stdin);
                  strcpy(marcaBuscar, strtok(marcaBuscar, "\n"));

                  for(int i = 0; i < numModelos; i++)
                  {
                  if(strcmp(marcaBuscar, listaModelo[i].marca) == 0)
                      {
                       mostrarEncabezadoTabla();
                       mostrarModelo(listaModelo[i]);

                       printf("\n\n");

                       listaModelo[i] = crearNuevoModelo();
                       mostrarEncabezadoTabla();
                       mostrarModelo(listaModelo[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarModelo(Modelo listaModelo[])
{


                int opcionBuscar;
                char modeloBuscar[TAM_MODELO];        // Almacena el nombre a buscar dentro de la estructura                
	        char marcaBuscar[TAM_MARCA];         // Almacena la matricula a buscar dentro de la estructura             


                printf(_TCYAN     _NEGRITA "Eliminar modelo por:\n\n");
                printf(_TBLANCO   _NEGRITA "1. Modelo\n");
                printf(_TBLANCO   _NEGRITA "2. Marca \n\n");
                printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
                scanf("%d", &opcionBuscar);
                
        
        
        
        

  switch(opcionBuscar)
  {
  
              case _xModelos:
              
              
              
              
                  while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */
                  printf(_TCYAN _NEGRITA "\n\nIntroduce el modelo: ");
                  fgets(modeloBuscar, TAM_MODELO, stdin);
                  strcpy(modeloBuscar, strtok(modeloBuscar, "\n"));

                  for(int i = 0; i < numModelos; i++)
                  {
                  if(strcmp(modeloBuscar, listaModelo[i].modelo) == 0)
                      {
                       mostrarEncabezadoTabla();
                       mostrarModelo(listaModelo[i]);

                       printf("\n\n");
                       printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "_NNEGRITA _TVERDE);

                       char opcionEliminar;
                       while((opcionEliminar = getchar()) == 's')
                       {
                        printf("\nSizeof: %lu\n", sizeof(* listaModelo));
                        listaModelo = eliminarUnModelo(listaModelo, i);
                       }

                          printf("\n\n");
                  break;
              }
          }
          break;
          
          

      case _xMarca:
      
      
      
      
                  while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */
                  printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
                  fgets(marcaBuscar, TAM_MARCA, stdin);
                  strcpy(marcaBuscar, strtok(marcaBuscar, "\n"));

                  for(int i = 0; i < numModelos; i++)
                  {
                  if(strcmp(marcaBuscar, listaModelo[i].marca) == 0)
                      {
                          mostrarEncabezadoTabla();
                          mostrarModelo(listaModelo[i]);

                          printf("\n\n");
                          printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "_NNEGRITA _TVERDE);

                          char opcionEliminar;
                          while((opcionEliminar = getchar()) == 's')
                        {
                              listaModelo = eliminarUnModelo(listaModelo, i);
                          }

                          printf("\n\n");
                  break;
              }
          }
  }
}



Modelo * eliminarUnModelo(Modelo listaModelo[], int posicion)
{
          if(posicion < (numModelos - 1))
          {
            for(int j = posicion; j < numModelos-1; j++)
            {
             
             
              strcpy(listaModelo[j].modelo,listaModelo[j+1].modelo);
              strcpy(listaModelo[j].marca,listaModelo[j+1].marca);
              strcpy(listaModelo[j].color,listaModelo[j+1].color);
              strcpy(listaModelo[j].compania,listaModelo[j+1].compania);
              strcpy(listaModelo[j].precio,listaModelo[j+1].precio);
              
             
            }
          }

                strcpy(listaModelo[numModelos-1].modelo,"");
                strcpy(listaModelo[numModelos-1].marca,"");
                strcpy(listaModelo[numModelos-1].color,"");
                
                strcpy(listaModelo[numModelos-1].compania,"");
                strcpy(listaModelo[numModelos-1].precio,"");
                
                
                //listaModelo[numModelos-1].compania='\0';
                //listaModelo[numModelos-1].precio=-1;
                //numModelos--;

          printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaModelo;
}

