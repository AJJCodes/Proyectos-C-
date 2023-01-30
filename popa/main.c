#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct direccion{
char Call3[25];
int numero;
char nombre[30];
} d[40];

void main(void)
{
    int i;
    for (i=0; i<40; i++)
    {
    printf("Persona Numero %i: \n\n",i+1);
    printf("Direccion Habitacional: \n--> ");
    gets(d[i].Call3);
    fflush(stdin);
    printf("\nNumero\n--> ");
    scanf ("%i",&d[i].numero);
    fflush(stdin);/*Limpieza de buffer */
    printf("\nNombre\n--> ");
    gets(d[i].nombre);
    fflush(stdin);
    printf("\n\nDireccion Habitacional: %s\n",d[i].Call3);
    printf("Numero: %i\n",d[i].numero);
    printf("Nombre: %s\n",d[i].nombre);
    getch();
    system("cls");
    }

        for (i=0; i<40; i++)
    {
    printf("\n\nDirección Habitacional: %s\n",d[i].Call3);
    printf("Numero: %i\n",d[i].numero);
    printf("Nombre: %s\n",d[i].nombre);
    getch();
    }
}
