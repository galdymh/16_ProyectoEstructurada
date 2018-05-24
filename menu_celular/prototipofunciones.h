/*----------------------------------------------------------------*/
/* Autor: Mendoza Hernández Galdina				  */
/* E-mail: galdymh@gmail.com                                      */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de secuencia de colores                */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_MODELO      50         // Definicion del tamaño modelo 
#define TAM_MARCA 10              //Definicion del tamaño marca
#define TAM_COLOR      12        //Tamanio de color del celular              
#define TAM_COMPANIA    12      // Tamanio de compañia                 
#define TAM_PRECIO 10          //Tamanio de precio                          



typedef struct
{
	char modelo[TAM_MODELO];
	char marca[TAM_MARCA];
	char color[TAM_COLOR];
	char compania[TAM_COMPANIA];
	char precio[TAM_PRECIO];
	
}

Modelo;


/* Funciones que imprimen mensajes en pantalla */
        void menuPrincipal(void);
        void mostrarEncabezadoTabla(void);
        void mostrarModelo(Modelo);
        void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de alumnos */
Modelo crearNuevoModelo(void);

        void mostrarListaModelo(Modelo [], int);
        void buscarModelo(Modelo []);
        void actualizarModelo(Modelo []);
        void eliminarModelo(Modelo []);


/* Funcion que permite eliminar el alumno, es invocada por la funcion eliminarAlumno() */
Modelo * eliminarUnModelo(Modelo [], int);


/* Funciones que permiten ordenar los datos de los alumnos */
        int * ordenarAscendente(Modelo [], int []);
        int * ordenarDescendente(Modelo [], int []);


#endif

