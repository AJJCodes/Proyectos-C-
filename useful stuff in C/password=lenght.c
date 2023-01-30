#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    /*Use this if you know the lenght*/
    char password[10],C;
    int i;
    printf("Password\n--> ");
    for(i=0;i<=10-1;i+=1){
        C=getch();
        password[i]=C;
        printf("*");
    }
    printf("\n%s",password);
    getch();
}
