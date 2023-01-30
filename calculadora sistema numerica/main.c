#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/*Prototipando*/
char *decimal_a_binario(int n);
int binario_a_decimal(int numero);
int decimal_a_hexadecimal();
int H_D();
int B_H();
int hex_a_binario(char a[41]);

void main(){

    int OPC,z,a;char *x,HBI[41],i;
    int B;/*Variable basura*/

    /*Vector de funciones*/
    int (*array[]) (int)={binario_a_decimal,decimal_a_hexadecimal,H_D,B_H};
    int (*array2[])(char[41])={hex_a_binario};
    system("cls");
    do{
        system("cls");
        printf("Bienvenido a la calculadora de sistemas numericos\nselecione una opcion\n");
        printf("\n1.Decimal a binario\n\n2.Binario a decimal\n\n3.decimal a hexadecimal\n\n4.hexadecimal a decimal\n\n5.binario a hexadecimal\n\n");
        printf("6.hexadecimal a binario\n\n7.Salir\n\n--> ");
        scanf("%d",&OPC);
        switch (OPC){
        case 1:
            system("cls");
            printf("Ingrese su numero en decimal a convertir\n--> ");
            scanf("%d",&z);
            x= decimal_a_binario(z);/*Respuesta al usuario*/
            printf("Su numero en binario es: %s",x);
            break;
        case 2:
            system("cls");
            printf("Ingrese su numero en binario a convertir maximo 5 digitos\n--> ");
            scanf("%d",&z);
            a=array[0](z);
            printf("Su numero en decimal es: %d",a);
            break;
        case 3:
            system("cls");
            array[1](B);
            break;
        case 4:
            system("cls");
            array[2](B);
            break;
        case 5:
            system("cls");
            array[3](B);
            break;
        case 6:
            system("cls");
            printf("Ingrese su numero hexadecimal a convertir\n--> ");
            scanf("%40s",&HBI);
            B=array2[0](HBI);
            break;
        case 7:
            system("cls");
            printf("Gracias por utilizar nuestro programa :)");
            exit(1);
            break;
        default:
            printf("Opcion no valida intente de nuevo");
        }
        getch();
    }while(OPC!=7);
}

char *decimal_a_binario(int n)
{
  int c, d, t;
  char *p;

  t = 0;/*contador en 0*/
  p = (char*)malloc(32+1);/*Asignacion de espacio*//*Asignamos porque si no da resultados erroneos*/

  if (p == NULL){
    exit(EXIT_FAILURE);/*Salir del programa si no ingreso nada*/
  }
  for (c = 20 ; c >= 0 ; c--)
  {
    d = n >> c;/*Operador bitwise*/

    if (d & 1)/*Si d es igual a la activacion de bits =1*/
      *(p+t) = 1 + '0';
    else/*si d es distinto a la activacion de bits=0*/
      *(p+t) = 0 + '0';

    t++;/*contador de indice*/
  }
  *(p+t) = '\0';/*Caracter nulo*/

  return  p;
}

int binario_a_decimal(int numero){

    int rem,base=1,val_decimal=0;

     while (numero > 0)
    {
        rem = numero % 10;/*Residuo*/
        val_decimal = val_decimal + rem * base;/*respuesta*/
        numero = numero / 10 ;
        base = base * 2;
    }
return val_decimal;
}

int decimal_a_hexadecimal(){
    long NDecimal, cociente, residuo;
    int i, j = 0;
    char *Hexadecimal;
    Hexadecimal=(char*)calloc(100,sizeof(char));/*Asignacion*/
    printf("Ingresa un numero decimal\n--> ");
    scanf("%ld",&NDecimal);

    cociente = NDecimal;/*Division modular*/

    while (cociente != 0)
    {
        residuo = cociente % 16;
        if (residuo < 10)
            Hexadecimal[j++] = 48 + residuo;
        else
            Hexadecimal[j++] = 55 + residuo;
        cociente = cociente / 16;
    }
    printf("su numero a hexadecimal es: ");
    for (i = j; i >= 0; i--){
            printf("%c",*(Hexadecimal+i));/*Inpresion de los datos*/
    }
    return 0;
}

int H_D(){
    char hex[20];
    long long decimal, Lugar;
    int i = 0, val, L;
    decimal = 0;
    Lugar = 1;

    /* Hexa de usuario*/
    printf("Ingrese su numero hexadecimal\n--> ");
    scanf("%19s,",&hex);

    /* encontrar la longitud del hexadecimal ingresado*/
    L = strlen(hex);
    L--;

    for(i=0; *(hex+i)!='\0'; i++){
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
        decimal += val *pow(16, L);
        L--;
    }
    printf("Numero a decimal = %lld", decimal);
    return 0;
}

int B_H(){

    long int valorbin, valhexadecim = 0, i = 1, sobrante;
    printf("Ingrese un numero binario\n--> ");
    scanf("%ld", &valorbin);

    while (valorbin != 0){
        sobrante = valorbin % 10;/*residuo*/
        valhexadecim = valhexadecim + sobrante * i;/*respuesta*/
        i = i * 2;
        valorbin = valorbin / 10;
    }
    printf("Equivalente a valor hexadecimal: %lX", valhexadecim);

    return 0;
}

int hex_a_binario(char a[41]){
    int L,i;
    L=strlen(a);
    printf("Su numero a binario es: ");
    for (i=0;i<=L;i++){
        switch(*(a+i)){
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
            printf("1010");
            break;
        case 'B':
            printf("1011");
            break;
        case 'C':
            printf("1100");
            break;
        case 'D':
            printf("1101");
            break;
        case 'E':
            printf("1110");
            break;
        case 'F':
            printf("1111");
            break;
        case 'a':
            printf("1010");
            break;
        case 'b':
            printf("1011");
            break;
        case 'c':
            printf("1100");
            break;
        case 'd':
            printf("1101");
            break;
        case 'e':
            printf("1110");
            break;
        case 'f':
            printf("1111");
            break;
        }
    }
    return 0;
}
