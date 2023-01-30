#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <sys/stat.h>
#include <string.h>

/*Prototipando las funciones*/
void Menu1();
void Menu2();
void Agregar_companeros();
int cfileexists(const char* filename);
void imprimir_companeros();
void Agregar_Trabajo();
void buscar_Trabajo();
void imprimir_companeros_Trabajo();
void imprimir_familia();
void buscar_Familia();
void Agregar_Familia();
void Agregar_Gym();
void imprimir_Gym();
void buscar_Gym();

    /*punteros a archivos globales*/
    FILE *ptr1;/*Puntero a compañeros*/
    FILE *ptr2;/*Puntero a Trabajo*/
    FILE *ptr3;/*Puntero a Familiares*/
    FILE *ptr4;/*Puntero a Gimnasio*/

struct registro{
    char nombre[21];
    int numero;
}A;/*Estructura para guardar los datos*/

void main()
{
    int OPC1,COSA=0,OPC2;
    fflush(stdin);/*Limpiando buffer*/
    while(COSA==0){
    system("cls");
    Menu1();
    fflush(stdin);
    scanf("%d",&OPC1);
    system("cls");
        switch(OPC1){
        case 1:
            fflush(stdin);
            Menu2();
            scanf("%d",&OPC2);
            switch(OPC2){
            case 1:
                Agregar_companeros();
                break;
            case 2:
                buscar_companeros();
                break;
            case 3:
                break;
            case 4:
                imprimir_companeros();
                break;
            }
            break;
        case 2:
            fflush(stdin);
            Menu2();
            scanf("%d",&OPC2);
            switch(OPC2){
            case 1:
                Agregar_Trabajo();
                break;
            case 2:
                buscar_Trabajo();
                break;
            case 3:
                break;
            case 4:
                imprimir_companeros_Trabajo();
                break;

            }
            break;
        case 3:
            Menu2();
            scanf("%d",&OPC2);
            switch(OPC2){
            case 1:
                Agregar_Familia();
                break;
            case 2:
                buscar_Familia();
                break;
            case 3:
                break;
            case 4:
                imprimir_familia();
                break;
            }
            break;
        case 4:
            Menu2();
            scanf("%d",&OPC2);
            switch(OPC2){
            case 1:
                Agregar_Gym();
                break;
            case 2:
                buscar_Gym();
                break;
            case 3:
                break;
            case 4:
                imprimir_Gym();
                break;
            }
            break;
        case 5:
            printf("Gracias por utilizar nuestro sistema\n");
            exit(1);
            break;
        default:
            printf("Esa opcion es invalida\nPresione una tecla para continuar\n");
            getch();
            break;
        }
        fclose(ptr1);
        fclose(ptr2);
        fclose(ptr3);
        fclose(ptr4);
    }
    getch();
}

void Menu1(){
    printf("bienvenido al sistema de invitados\n");
    printf("----------------------\n1.Compa%ceros\n2.Trabajo\n3.Familiares\n4.Gimnasio\n5.Salir\n----------------------\n--> ",164);
}

void Menu2(){
    printf("selecione una opcion\n----------------------\n");
    printf("1.Agregar\n2.Buscar\n3.Borrar\n4.Imprimir datos\n5.Modificar\n6.Volver al menu anterior\n-->");
}

void Agregar_companeros(){
    system("cls");
    char nombres[20];
    int numero,cont=0;
    ptr1=fopen("C://MSI//Compañeros.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(A.nombre);
    system("cls");
    printf("Ingrese su numero celular\n--> ");
    scanf("%d",&A.numero);
    system("cls");
    fwrite(&A,sizeof(A),1,ptr1);
   fclose(ptr1);
}

int cfileexists(const char* filename){
    struct stat buffer;
    int exist = stat(filename,&buffer);
    if(exist == 0)
        return 1;
    else // -1
        return 0;
}

void buscar_companeros(){
    system("cls");
    char nombres[20];
    int numero,cont=0;
    ptr1=fopen("C://MSI//Compañeros.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(nombres);
    system("cls");
        while(!feof(ptr1)){
         fread(&A,sizeof(A),1,ptr1);
         if(strstr(nombres,A.nombre)!=NULL){
            printf("Encontre un nombre asi:\nSus datos\n%s \nCelular: %d",A.nombre,A.numero);
            break;
         }else{
             printf("Ese nombre no se encuentra en la lista");
             break;
         }
    }
    getch();
    fclose(ptr1);
}

void contar_lineas_companeros(){
    char filename[]="C://MSI//Compañeros.txt";
    char temp;
     FILE *fp = fopen(filename,"r");
  int ch=0;
  int lines=0;
  lines++;
  while(fscanf(fp,"%c",&temp) != -1){
                if(temp == 10) lines++;
        }

        fprintf(stdout,"File tiene %d lineas\n",lines);
  fclose(fp);
}

void imprimir_companeros(){
    system("cls");
    printf("Los compa%ceros son:\n",164);
    char filename[]="C://MSI//Compañeros.txt", c;
    // Open file
    ptr1 = fopen(filename, "r+");
    if (ptr1 == NULL)
    {
        printf("No puedo abrir el archivo\n");
        exit(0);
    }
    while(!feof(ptr1)){
         fread(&A,sizeof(A),1,ptr1);
         printf("\n");
        printf("\n%s \nCelular: %d",A.nombre,A.numero);
    }
    getch();
    fclose(ptr1);
}

void Agregar_Trabajo(){
    system("cls");
    char nombres[20];
    int numero,cont=0;
    ptr2=fopen("C://MSI//Trabajo.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(A.nombre);
    system("cls");
    printf("Ingrese su numero celular\n--> ");
    scanf("%d",&A.numero);
    system("cls");
    fwrite(&A,sizeof(A),1,ptr2);
   fclose(ptr2);
}

void buscar_Trabajo(){
    system("cls");
    char nombres[20];
    int numero,cont=0;
    ptr2=fopen("C://MSI//Trabajo.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(nombres);
    system("cls");
        while(!feof(ptr2)){
         fread(&A,sizeof(A),1,ptr2);
         if(strstr(nombres,A.nombre)!=NULL){
            printf("Encontre un nombre asi:\nSus datos\n%s \nCelular: %d",A.nombre,A.numero);
            break;
         }else{
             printf("Ese nombre no se encuentra en la lista");
             break;
         }
    }
    getch();
    fclose(ptr2);
}

void imprimir_companeros_Trabajo(){
    system("cls");
    printf("Los compa%ceros de trabajo son:\n",164);
    char filename[]="C://MSI//Trabajo.txt", c;
    // Open file
    ptr2 = fopen(filename, "r+");
    if (ptr2 == NULL)
    {
        printf("No puedo abrir el archivo\n");
        exit(0);
    }
    while(!feof(ptr2)){
         fread(&A,sizeof(A),1,ptr2);
         printf("\n");
        printf("\n%s \nCelular: %d",A.nombre,A.numero);
    }
    fclose(ptr2);
    getch();
}

void Agregar_Familia(){
    system("cls");
    char nombres[20];
    int numero,cont=0;
    ptr3=fopen("C://MSI//Familia.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(A.nombre);
    system("cls");
    printf("Ingrese su numero celular\n--> ");
    scanf("%d",&A.numero);
    system("cls");
    fwrite(&A,sizeof(A),1,ptr3);
   fclose(ptr3);
}

void buscar_Familia(){
    system("cls");
    char nombres[20];
    int numero,cont=0;
    ptr3=fopen("C://MSI//Familia.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(nombres);
    system("cls");
        while(!feof(ptr3)){
         fread(&A,sizeof(A),1,ptr3);
         if(strstr(nombres,A.nombre)!=NULL){
            printf("Encontre un nombre asi:\nSus datos\n%s \nCelular: %d",A.nombre,A.numero);
            break;
         }else{
             printf("Ese nombre no se encuentra en la lista");
             break;
         }
    }
    getch();
    fclose(ptr3);
}

void imprimir_familia(){
    system("cls");
    printf("Los familiares son:\n",164);
    char filename[]="C://MSI//Familia.txt", c;
    // Open file
    ptr3 = fopen(filename, "r+");
    if (ptr3 == NULL)
    {
        printf("No puedo abrir el archivo\n");
        exit(0);
    }
    while(!feof(ptr3)){
         fread(&A,sizeof(A),1,ptr3);
         printf("\n");
        printf("\n%s \nCelular: %d",A.nombre,A.numero);
    }
    fclose(ptr3);
    getch();
}

void Agregar_Gym(){
    system("cls");
    char nombres[20];
    int numero,cont=0;
    ptr4=fopen("C://MSI//Gym.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(A.nombre);
    system("cls");
    printf("Ingrese su numero celular\n--> ");
    scanf("%d",&A.numero);
    system("cls");
    fwrite(&A,sizeof(A),1,ptr4);
   fclose(ptr4);
}

void buscar_Gym(){
    system("cls");
    char nombres[20];
    int numero,cont=0;
    ptr4=fopen("C://MSI//Gym.txt","a+");
    printf("Ingrese el nombre de la persona\n--> ");
    fflush(stdin);
    gets(nombres);
    system("cls");
        while(!feof(ptr1)){
         fread(&A,sizeof(A),1,ptr4);
         if(strstr(nombres,A.nombre)!=NULL){
            printf("Encontre un nombre asi:\nSus datos\n%s \nCelular: %d",A.nombre,A.numero);
            break;
         }else{
             printf("Ese nombre no se encuentra en la lista");
             break;
         }
    }
    getch();
    fclose(ptr4);
}

void imprimir_Gym(){
    system("cls");
    printf("Los integrantes del gimnasio  son:\n",164);
    char filename[]="C://MSI//Gym.txt", c;
    // Open file
    ptr4 = fopen(filename, "r+");
    if (ptr4 == NULL)
    {
        printf("No puedo abrir el archivo\n");
        exit(0);
    }
    while(!feof(ptr4)){
         fread(&A,sizeof(A),1,ptr4);
         printf("\n");
        printf("\n%s \nCelular: %d",A.nombre,A.numero);
    }
    fclose(ptr4);
    getch();
}
