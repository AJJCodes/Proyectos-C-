#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void main(void)
{
    char A[31],B[31]={"holamundos"},*C,*P;int i,l,S;
    system("cls");
    l=strlen(B);
    P=&B[0];
    for(i=0;i<=l;i++){
        A[i]=toupper(*P);
        P++;
    }
    printf("%s",A);
    S=l/2;
    C=&A[0];
    C=C+5;
    printf("\n%c",*C);
}
