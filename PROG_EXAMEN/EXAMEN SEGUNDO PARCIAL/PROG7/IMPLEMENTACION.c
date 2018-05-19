/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/*PROGRAMA: ESTRUCTURA DE MENÚ DE OPCIONES                      */
/*--------------------------------------------------------------*/


#include <stdio.h>
#include "LLAMADAS.h"


enum menu{INGRESAR = 1, MOSTRAR, ACTUALIZAR, ELIMINAR, SALIR};


void operacion(void)
{
	int op;
	do
	{
		op=opcion();
		menu(op);
	}while(op!=SALIR);
}

int opcion(void)
{
	int opcion;
	printf("\t\tMENÚ\n\n");
	printf("\n\t1.Ingresar.");
	printf("\n\t2.Mostrar.");
	printf("\n\t3.Actualizar.");
	printf("\n\t4.Eliminar");
	printf("\n\t5.Salir.\n");
	
	printf("\nEscribe una opción: ");
	scanf("%d",&opcion);
	return opcion;
}

void menu(int op)
{
	switch(op)
		{
			case INGRESAR:
				printf("Usted se encuentra en la opción INGRESAR\n");
			break;
			case MOSTRAR:
				printf("Usted se encuentra en la opción MOSTRAR\n");
			break;
			case ACTUALIZAR:
				printf("Usted se encuentra en la opción ACTUALIZAR\n");
			break;
			case ELIMINAR:
				printf("Usted se encuentra en la opción ELIMINAR\n");
			break;
			
		}
}
