#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*Prototipando*/
int validacion(ca);
void main()
{
    char *N;
    N=(char*) calloc(51, sizeof(char));
    scanf("%30s",&N);
    printf("%s",*N);
}

int validacion(ca){
    char CA[4];
    while((ca<=0)||(ca==0)){
            system("cls");
        if(ca<0){
            printf("Error, ingrese un numero mayor que 0\n--> ");
        }
        if(ca==0){
            printf("Error , ingrese un numero entero\n--> ");
        }
        scanf("%3s",&CA);
        ca=atoi(CA);
    }
    return ca;
}
