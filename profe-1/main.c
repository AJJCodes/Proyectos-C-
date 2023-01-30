#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    /*Declaracion de variables*//*CAMBIAR VARIABLES!!!!!Borrar este comentario*/
   float NOTAS[21],B;int i,aprobados,reprobados;char A[1000];
   /*Inicio de contadores*/
   aprobados=0;
   reprobados=0;
   for(i=1;i<=21-1;i++){
    system("cls");
    printf("Ingrese las notas finales del estudiante num %d\n--> ",i);
    scanf("%s",&A);
    B=atof(A);
    /*Validacion de datos ingresados*/
    while(B==0){
        system("cls");
        printf("Error, Ingreso un caracter no valido,Ingrese uno valido\n--> ");
        scanf("%s",&A);
        B=atof(A);
    }
    /*Asignacion de datos*/
    NOTAS[i]=B;
    /*Contando aprobados y reprobados*/
    if(NOTAS[i]>=60){
        aprobados=aprobados+1;
    }else{
        reprobados=reprobados+1;
    }
   }
   printf("Lista de las notas:\n");
   for(i=1;i<=21-1;i++){
    printf("%d.%.2f\n",i,NOTAS[i]);
   }
   printf("\n Estudiantes aprobados--> %d\nEstudiantes Reprobados-->%d",aprobados,reprobados);
   getch();
}
