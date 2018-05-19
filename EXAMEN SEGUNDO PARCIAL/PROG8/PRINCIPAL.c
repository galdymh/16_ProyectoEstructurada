/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/*PROGRAMA:estructura Alumno con los miembros nombre, edad y peso.*/
/*--------------------------------------------------------------*/


#include <stdio.h>

#define N 30



struct Alumno
{
	char nombre[N];
	int edad;
	float peso;
}alumno1={"RICARDO", 21, 65};

int main(void)
{
	printf("El nombre del alumno es: %s\n", alumno1.nombre);
	printf("La edad del alumno es: %d\n", alumno1.edad);
	printf("El peso del alumno es: %.0f\n", alumno1.peso);
	return 0;
}


	
