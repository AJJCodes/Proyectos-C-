#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void main(){
    char *hex;
    long long decimal, Lugar;
    int i = 0, val, L;
    hex=(char*)calloc(20,sizeof(char));
    decimal = 0;
    Lugar = 1;

    /* Hexa de usuario*/
    printf("Ingrese su numero hexadecimal\n--> ");
    gets(hex);

    /* encontrar la longitud del hexadecimal ingresado*/
    L = strlen(hex);
    L--;

    for(i=0; *(hex+i)!='\0'; i++)
    {

        /* Encontrar la representacion hexadecimal de cada char*/
        if( *(hex+i)>='0' && *(hex+i)<='9')
        {
            val = *(hex+i) - 48;
        }
        else if(*(hex+i)>='a' && *(hex+i)<='f')
        {
            val = *(hex+i) - 97 + 10;
        }
        else if(*(hex+i)>='A' && *(hex+i)<='F')
        {
            val = *(hex+i) - 65 + 10;
        }
        decimal += val * pow(16, L);
        L--;
    }
    printf("Numero a decimal = %lld", decimal);
getch();
}
