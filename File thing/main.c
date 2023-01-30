#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define DATA_SIZE 1000
struct registro{
    char nombre[21];
    int numero;
}A;

void main(){
    char nombres[20];
    int numero,cont=0;
    FILE *ptr1;
    ptr1=fopen("Gym.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(nombres);
    system("cls");
    /*printf("Ingrese su numero celular\n--> ");
    scanf("%d",&A.numero);*/
    system("cls");
    fwrite(&A,sizeof(A),1,ptr1);
    while(!feof(ptr1)){
         fread(&A,sizeof(A),1,ptr1);
         if(strstr(nombres,A.nombre)!=NULL){
            printf("Encontre un nombre asi:\nSus datos\n%s \nCelular: %d",A.nombre,A.numero);
            break;
         }
    }
    fclose(ptr1);
}
