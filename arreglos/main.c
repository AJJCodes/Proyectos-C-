#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int a,b,c;float arreglo[9][9];
    /*Inicio de acum a 0*/
     for(a=0;a<9;a++){
            printf("Ingrese un numero[%d]\n ",a);
            for(b=0;b<9;b++){
                    scanf("%f",&arreglo[a][b]);
            }
    }
    /*asignacion de la diagonal principal*/
    for(a=0;a<9;a++){
            for(b=0;b<9;b++){
                    if(a==b){*(*(arreglo+a)+b)=1;
                    }
            }
    }
    /*Inpresion de datos*/
    system("cls");
    for(a=0;a<9;a++){
            for(b=0;b<9;b++){
                 printf("%.2f ",arreglo[a][b]);
            }
            printf("\n");
    }
  getch();
}
