/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:16-05-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/* Fecha de actualización: 17-04-2018                           */
/*PROGRAMA:estructura Libro con los miembros título, autor y página.*/
/*--------------------------------------------------------------*/


#include <stdio.h>

#define N 30



struct Libro
{
	char titulo[N];
	char autor[N];
	int pagina;
}libro1={"ORGULLO Y PEJUICIO", "JANE AUSTEN", 600};

int main(void)
{
	printf("El nombre del libro es: %s\n", libro1.titulo);
	printf("El nombre del autor es: %s\n", libro1.autor);
	printf("El número de páginas es: %d\n", libro1.pagina);
	return 0;
}


	
