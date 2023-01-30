#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char p[3][21],N[6][34],dir[4][7],**A,**B,**D;
    int i,L,E[4],*C;

    printf("Ingrese el numero de estudiantes\n--> ");
    scanf("%d",&L);

    A=&p[0][0];/*Puntero a carnet*/

    B=&N[0][0];/*Puntero a Nombre*/

    C=&E[0];/*Puntero a edad*/

    D=&dir[0][0];/*Puntero a direccion */

    A=(char)malloc(L* 13*sizeof(char));/*Aloje de memoria 2d*/

    B=(char)malloc(L* 52*sizeof(char));/*Aloje de memoria 2d*/

    C=(int)malloc(L* sizeof(int));

    D=(char)malloc(L* 60*sizeof(char));

    for(i=1;i<=L;i++){
        system("cls");
        printf("Numero de carnet del estudiante numero %d\n--> ",i);
        scanf("%10s",&p[i]);
        system("cls");
        printf("Ingrese el nombre del estudiante numero %d\n--> ",i);
        scanf("%50s",&N[i]);
        system("cls");
        printf("Ingrese la edad de estudiante numero %d\n--> ",i);
        scanf("%d",&E[i]);
        system("cls");
        printf("Ingrese la direccion del estudiante numero %d\nuse _ en vez de espacio\n--> ",i);
        scanf("%s",&dir[i]);
    }
    system("cls");
    for(i=1;i<=L;i++){
            printf("\n%s",N[i]);/*Nombre*/
            printf("\n%s",p[i]);/*Carnet*/
            printf("\n%d",E[i]);/*Edad*/
            printf("\n%s",dir[i]);/*Direccion*/
            printf("\n");
    }

    free(A);
    free(B);
    free(C);
    free(D);
    getch();
}
