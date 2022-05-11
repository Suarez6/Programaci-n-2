#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

char Palabras [12][12]= {"colombia","argentina", "brasil","paraguay", "uruguay",
                   "mexico", "venezuela", "ecuador", "chile", "peru",
				   "bolivia","panama"};

char palabra1 [12];
char palabra2 [12];

int vidas =6;
int Aleatorio(int rango) // Crear un array con datos
                // aleatorios y mostrarlos en pantalla
{
	srand (time(NULL));
	return ((rand() %rango)+1);
}

void SelecionarPalabra()
{
	int x;
	x= Aleatorio(12);
	int i=0;
	while (Palabras[x][i] != '\0')
	{
		palabra1[i]= Palabras[x][i];
		palabra2[i]= '-';
		i++;
	}
	printf("palabra1 : %s \n",palabra1);
	printf("palabra2 : %s \n",palabra2);

}
//-----------------------------------------------
void buscar()
{
	bool band=0;
	char letra;
	int x= strlen(palabra1);
	printf("\n Ingrese una letra:");
	scanf("%c",&letra);
	getchar();
	for (int i=0;i<x; i++)
	{
		if (letra == palabra1[i])
		{
			palabra2[i] = letra;
			band =1;
		}
	}
	if (band==0)
		vidas--;
	printf("\npalabra2 : %s", palabra2);
}
//-------------------------------------------------

main()
{
	SelecionarPalabra();
	while (vidas !=0 )
	{
	    while((strcmp(palabra1,palabra2))==1)
        {
		printf ("\nvidas : %d \n",vidas );
		buscar();
        }
	}
}
