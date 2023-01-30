#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    /*Declaracion de variables*/
    int Estudiantes[3],i,k,C,A,N,p=2;
    float notas[3][10],L;
    system("cls");
    /*Datos Usuario 1*/
    for(i=1;i<=3-1;i++){
        printf("Ingrese la cantidad de estudiantes en %d a%co\n--> ",p,164);
        scanf("%d",&Estudiantes[i]);
        p++;
    }

    for(i=1;i<=2;i++){
        notas[i][Estudiantes[i]+1];
    }
    system("cls");
    printf("Las notas se guardaran en posicion numerica\n");
    sleep(4);
    system("cls");
    for(i=1;i<=3-1;i++){
            p=2;
        for(k=1;k<=Estudiantes[i];k++){
                system("cls");
            printf("\nIngrese las notas del estudiante numero %d del %d a%co\n--> ",k,p,164);
            scanf("%f",&notas[i][k]);
        }
        p++;
    }
    for(i=1;i<=3-1;i++){
            printf("\nLas notas de los estudiantes de %d a%co son:\n",i,164);
        for(k=1;k<=Estudiantes[i];k++){
            printf("\nnestudiante %d== %.2f\n",k,notas[i][k]);
        }
    }
    printf("\nPresione cualquier tecla para continuar");
    getch();
    system("cls");
    printf("Desea Modificar las notas de algun estudiante? 1.Si/2.No\n--> ");
    scanf("%d",&C);
    if(C==1){
            system("cls");
        printf("Ingrese el a%co en que se ubica el estudiante\n Recuerde que solo tiene 2do y 3er año \n--> ",164);
        scanf("%d",&A);
        if(A==2){
            A=1;
        }
        printf("Ingrese el numero del estudiante\n--> ");
        scanf("%d",&N);
        printf("Ingrese La nueva nota a asignar\n--> ");
        scanf("%f",&L);
        notas[A][N]=L;
    }else{
        printf("\nGracias por utilizar nuestro sistema :D\n");
    }
    sleep(3);
    printf("La lista final de notas:\n");
    for(i=1;i<=3-1;i++){
            p=2;
            printf("\nLas notas de los estudiantes de %d a%co son:\n",i,164);
        for(k=1;k<=Estudiantes[i];k++){
            printf("n\nestudiante %d== %.2f\n",k,notas[i][k]);
        }
    p++;
    }
    getch();
}
