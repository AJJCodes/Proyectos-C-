#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*Prototipando*/
int validacion(ca);

void main()
{
    char CA[4],NC[3][12],NA[5][6];
    int ca,i,a,c=12;/*Numero de alumnos*/
    printf("Ingrese la cantidad de alumnos a ingresar\n--> ");
    scanf("%3s",&CA);
    ca=atoi(CA);/*Convierte a entero*/
    if((ca==0)||(ca<0)){
        ca=validacion(ca);/*Validacion de cant ingresada*/
    }

    char **NCP = (char*)malloc(ca* 13*sizeof(char));/*Cant estudiantes*//*12 para carnet*/

    char **NAP = (char*)malloc(ca* 52*sizeof(char));/*cant estudiante*//*Para ingresar nombre*/

    for(i=1;i<=ca;i++){
        system("cls");
        printf("Ingrese el numero de carnet del estudiante numero %d\n--> ",i);
        scanf("%10s",&NC[i]);
        sleep(1);
        system("cls");
        printf("Ingrese el nombre del estudiante\ningrese_en ves de espacio\n--> ");
        scanf("%50s",&NA[i]);
    }
    for(i=1;i<=ca;i++){
        printf("\n%s\n",NA[i]);
        /*printf("\ncarnet:%s ",NC[i]);*/
    }
    getch();
    free(NAP);
    free(NCP);
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
