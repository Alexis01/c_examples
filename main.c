/*
    diccionario.h
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PAL 100
#define MAX_CAD 20

typedef struct
{
    char ingles[MAX_CAD];
    char espanyol[MAX_CAD];
} tPalabra;

int menu();
void leeCadena(char cadena[], int max);
int anyadir_palabra(tPalabra Dicc[], int num);
void traducir_palabra(tPalabra Dicc[], int num);
void mostrar_diccionario(tPalabra Dicc[], int num);
/////////-----------------//////
/*
    main.c
*/

#include "diccionario.h"

int main (){
    tPalabra Diccionario[MAX_PAL];
    int num_pal=0;
    int opcion;

    printf ("PROGRAMA DICCIONARIO\n");
    printf ("====================\n");
    opcion = menu();
	/* AÑADA AQUI EL CÓDIGO DE LA FUNCIÓN MAIN*/
    switch(opcion){
        case 1:{
            //leer la cadena 
            char cadena[MAX_PAL];
            leeCadena(cadena,MAX_PAL);
            printf("%s",cadena);
            break;
        }
        case 2:{
            //traducir
            printf ("Traducir palabra function\n");
            break;
        }
        case 3:{
            printf ("Mostrar diccionario\n");
            //recorrer el array 
            break;
        }
    }
}

int menu(){
  int op;
  do{
    system("cls");
    printf ("\n"
                "\t1.- Anyadir palabra\n"
                "\t2.- Traducir palabra\n"
                "\t3.- Mostrar diccionario\n"
                "\t4.- Salir\n"
                "\n"
                "Elija una opcion: ");

     scanf ("%d", &op);
     while (getchar() != '\n'); // fflush(stdin);
  }while ((op<1)||(op>4));

  return op;
}

void leeCadena(char cadena[], int max){
	char *p;
	int n;

	p = fgets(cadena, max, stdin);
	if (p != NULL)
	{
		n = strlen(cadena);
		if (n>0 && cadena[n - 1] == '\n')
			cadena[n - 1] = '\0';
	}
}