#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int est();

void main(void)
{
    int a,b,c;/*contadores*/
    float Notas[2][3][5],acum[3][3][5];/*estudiante*//*semestre*//*parcial*/
    int nombre[4][21];/*Nom estudiante*//*cant permitida*/
    float Sem[3][3][2];/*notas del semestre*//*estudiante*//*semestre*//*nota*/
    int stu;
    system("cls");
    printf("Bienvenido al sistema de notas de 3er grado\n");
    sleep(1);
    printf("Ingrese el numero de estudiantes en el grado\n--> ");
    scanf("%d",&stu);
    nombre[stu+1][21];
    Notas[stu+1][6];
    Sem[stu+1];
    acum[stu+1][3][5];
    for(a=1;a<=stu;a++){
        printf("Ingrese el nombre del estudiante num %d\n--> ",a);
        scanf("%20s",&nombre[a]);
    }
    for(a=1;a<=stu;a++){
            for(b=1;b<=2;b++){
                    for(c=1;c<=4;c++){
                        system("cls");
                        printf("Ingrese las notas de %s\n",nombre[a]);
                        printf("%d parcial %d semestre\n--> ",c,b);
                        scanf("%f",&Notas[a][b][c]);
                    }
            }
    }


    for(a=1;a<=stu;a++){
        for(b=1;b<=2;b++){
                for(c=1;c<=4;c++){
                        acum[a][b][1]=acum[a][b][1]+Notas[a][b][c];
                }
        }
    }
    for(a=1;a<=stu;a++){
        for(b=1;b<=2;b++){
            Sem[a][b][1]=acum[a][b][1]/4;
        }
    }
    printf("\n%.2f",Sem[1][1][1]);
    printf("\n%.2f",Sem[1][2][1]);
    getch();
}
