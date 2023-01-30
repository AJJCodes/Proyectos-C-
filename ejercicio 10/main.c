#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*Prototipando*/
int validacion(ca);

void main()
{
    char CA[4];
    int ca,i,a,c=12;/*Numero de alumnos*/
    printf("Ingrese la cantidad de alumnos a ingresar\n--> ");
    scanf("%3s",&CA);
    ca=atoi(CA);/*Convierte a entero*/
    if((ca==0)||(ca<0)){
        ca=validacion(ca);/*Validacion de cant ingresada*/
    }

    for(i=1;i<=ca;i++){
        system("cls");
        printf("Ingrese el numero de carnet del estudiante numero %d\n--> ",i);
        scanf("%10s",&NC[i]);
        system("cls");
    }
    for(i=1;i<=ca;i++){
        printf("%s ",*(NC + i));
    }
    getch();
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
