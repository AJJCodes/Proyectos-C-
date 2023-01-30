#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int est();

void main(void)
{
    int a,b,c;/*contadores*/
    float Notas[2][5],acum[2];/*estudiante*//*parcial*/
    int nombre[4][21];/*Nom estudiante*//*cant permitida*/
    float Sem[3];/*notas del semestre*/
    int stu;
    system("cls");
    printf("Bienvenido al sistema de notas de 3er grado\n");
    sleep(1);
    printf("Ingrese el numero de estudiantes en el grado\n--> ");
    scanf("%d",&stu);
    nombre[stu+1][21];
    Notas[stu+1][6];
    Sem[stu+1];
    acum[stu+1];
    for(a=1;a<=stu;a++){
        printf("Ingrese el nombre del estudiante num %d\n--> ",a);
        scanf("%20s",&nombre[a]);
    }
    for(a=1;a<=stu;a++){
            for(b=1;b<=4;b++){
                 system("cls");
                 printf("Ingrese las notas de %s\n",nombre[a]);
                 printf("%d parcial\n--> ",b);
                 scanf("%f",&Notas[a][b]);
            }
    }


    for(a=1;a<=stu;a++){
        for(b=1;b<=4;b++){
            acum[a]=acum[a]+Notas[a][b];
            Sem[a]=acum[a]/4;
        }
    }
    printf("\n%.2f",Sem[1]);
    getch();
}
