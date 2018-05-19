/*-------------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                                   */
/* Fecha:26-03-2018                                                  */
/* Programa 4:Elabore un programa para obtener la distancia entre    */
/* dos puntos en el plano cartesiano, tal y como se muestra en la    */
/* figura. Analice el problema y contemple las siguientes variables: */
/* 	*X1 ,  X2 como Abscisas	        		             */
/* 	*Y1, Y2 como Ordenadas					     */
/* 	*X como Cateto de las abscisas                               */
/* 	*Y como Cateto de las ordenadas                              */
/* 	*D como Distancia entre dos puntos                           */ 
/*-------------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>
#include<math.h>



/*Declaración de la función principal*/
int main(void)
{
/*Declaración de función.*/
float x1,x2,y1,y2,D,S;
	printf("IGRESA LOS VALORES DE LAS ABSCISAS\n");	/*Imprime en pantalla el mensaje:"IGRESA LOS VALORES DE LAS ABSCISAS"*/
	printf("x1:\n");				/*Imprime en pantalla el mensaje:"x1"*/				
	scanf("%f",&x1);				/*Lee y guarda el valor introducido en la variable x1*/				
	printf("x2:\n");				/*Imprime en pantalla el mensaje:"x2"*/	
	scanf("%f",&x2);				/*Lee y guarda el valor introducido en la variable x2*/
	printf("INGRESA LOS VALORES DE LAS ORDENADAS\n");/*Imprime en pantalla el mensaje:"IGRESA LOS VALORES DE LAS ORDENADAS"*/
	printf("y1:\n");				/*Imprime en pantalla el mensaje:"y1"*/		
	scanf("%f",&y1);				/*Lee y guarda el valor introducido en la variable y1*/	
	printf("y2:\n");				/*Imprime en pantalla el mensaje:"y2"*/		
	scanf("%f",&y2);				/*Lee y guarda el valor introducido en la variable y2*/	
	S=pow((x2-x1),2)+pow((y2-y1),2);		/*A la variable S se le asigna el valor de (x2-x1)^2+(y2-y1)^2*/
	D=sqrt(S);					/*A la variable D se le asigna el valor de la raiz de la variable S*/
	printf("La distancia entre los dos puntos es %.2f\n",D);/*Imprime en pantalla el mensaje:"La distancia entre los dos puntos es"*/	
	return 0;					/*Términa la compilación de forma exitosa*/
}
	
	
