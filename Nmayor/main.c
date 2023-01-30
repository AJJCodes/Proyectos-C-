#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Prototipo de funciones*/
void Descendente(int *P);
void Ascendiente(int *P);

int main()
{
    int a,b,N[11],i,NMA,NM[11];
    int tmp;
    printf("A continuacion ingresara 10 numeros enteros\n");
    sleep(2);
    /*Datos usuario*/
    for(i=1;i<=11-1;i++){
        system("cls");
        printf("Ingrese el %d numero\n--> ",i);
        scanf("%d",&*(N+i));
    }

    for (i = 1; i < 11; ++i) {
        if (*(N+0)<*(N+i)){
            *(N+0) = *(N+i);
        }
    }
    printf("el numero mayor ingresado es %d",N[0]);
     for (i = 1; i < 11; ++i) {
            *(NM+i)=*(N+i);
    }
     for (i = 1; i < 11; ++i) {
        if (*(NM+0) > (NM[i])){
            NM[0] = *(NM+i);
        }
    }
    printf("\nEl numero menor ingresado es %d",NM[0]);
	printf("\npresione cualquier tecla para continuar");
    getch();
    return 0;
}
