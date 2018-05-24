/*----------------------------------------------------------------*/
/* Autor: Mendoza Hernández Galdina				  */
/* E-mail: galdymh@gmail.com                                      */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de secuencia de colores                */
/*----------------------------------------------------------------*/



#ifndef ENUMS_H_
#define ENUMS_H_

/* Declaracion de enumeraciones para el control de menu de opciones:                */
/* CREAR      = 1                                                                   */
/* LISTAR     = 2                                                                   */
/* LISTAR_ASC = 3                                                                   */
/* LISTAR_DES = 4                                                                   */
/* BUSCAR     = 5                                                                   */
/* ACTUALIZAR = 6                                                                   */
/* ELIMINAR   = 7                                                                   */
/* SALIR      = 8                                                                   */


enum OPCIONES_MENU{CREAR = 1, LISTAR, LISTAR_ASC, LISTAR_DES, BUSCAR, ACTUALIZAR, ELIMINAR, SALIR};


// Declaracion de enumeracion para el manejo de los casos: 
// Buscar por:     Modelo o por Marca,                 
// Actualizar por: Modelo o por Marca,                 
// Eliminar por:   Modelo o por Marca  


                
enum OPCIONES_BUSCAR_ACTUALIZAR_ELIMINAR{_xModelos=1,_xMarca};


#endif

