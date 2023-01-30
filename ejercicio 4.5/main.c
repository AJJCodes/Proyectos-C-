#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    char A[100];int i,l;
    /*datos usuario 1*/
    printf("Ingrese una cadena\n ");
    gets(A);
    /*Calculando la longitud ingresada*/
    while (*(A+i)!='\0'){
            i++;
    }
    l=i;
    printf("%d",l);
    getch();
}
