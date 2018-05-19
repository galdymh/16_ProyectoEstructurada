

#include <stdio.h>
#include "LLAMADAS7.h"
int BuscarMayor(int v[])
{
	int mayor=v[0];
	for(int i=1;i<N;i++)
	{
		if(mayor<v[i])
		{
			mayor=v[i];
		}
	}
	return mayor;
}

int BuscarMenor(int v[0])
{
int menor=v[0];
	for(int i=1;i<N;i++)
	{
		if(menor>v[i])
		{
			menor=v[i];
		}
	}
	return menor;
}
