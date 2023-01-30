#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
    char Mensaje[100], ch,Original[100];
	int i, Llave,l;

	printf("Ingrese su mensaje de encrpytar: ");
	gets(Mensaje);
	l=strlen(Mensaje);
	for(i=0;i<=l;i++){
        *(Original+i)=*(Mensaje+i);
	}
	printf("Ingrese la llave: ");
	scanf("%d",&Llave);
	while(Llave<1){
        system("cls");
        printf("Error , no se permiten numeros negativos intente de nuevo\n");
        printf("Ingrese la llave ");
	}

	for(i = 0;*(Mensaje+i)!= '\0'; ++i){
		ch = *(Mensaje+i);
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + Llave;
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			*(Mensaje+i) = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + Llave;

			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			*(Mensaje+i) = ch;/*Respuesta*/
		}
	}

	printf("Su mensaje original es: %s\n",Original);
	printf("Mensaje encriptado: %s", Mensaje);
}
