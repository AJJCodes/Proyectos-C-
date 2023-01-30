#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main()
{
    char cadenas[31],arreglo[31];int l,a,b;
    /*Datos usuario*/
    printf("Ingrese una cadena a revertir\n ");
    gets(cadenas);
    /*Longitud*/
    l=strlen(cadenas);
    /*Asignacion de contador al reves*/
    b=l-1;
    for(a=0;a<=l;a++){
            *(arreglo+a)=*(cadenas+b);
            b--;
    }
    /*Respuesta*/
    printf("\n%s",arreglo);
    getch();
}
