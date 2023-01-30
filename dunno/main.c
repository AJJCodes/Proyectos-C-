#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Prototipo de funciones*/
void fibonacci(int *B);

int main()
{
   int fin;
   system("cls");
   printf("Digite hasta donde quiere llegar en el fibonacci\n--> ");
   scanf("%d",&fin);
   fibonacci(fin);
}

void fibonacci(int *B){
    int i,F,A,D;
    F=0;
    A=1;
    for(i=0;i<=B;i++){
        printf("%d\n",F);
        D=F+A;
        F=A;
        A=D;
    }
}
