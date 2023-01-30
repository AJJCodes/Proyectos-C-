#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    float X;
    printf("Ingrese un valor a X\n--> ");
    scanf("%f",&X);
    while(1<X<=3){
        printf("Ese mismo\n ");
        X=X;
    }
    printf("Simon %f",X);
    getch();
}
