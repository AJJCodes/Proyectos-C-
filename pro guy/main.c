#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void main(void)
{
    int a, *p;    a=5;    p=&a;
    *p+=7;  /*comentario : es lo mismo que *p=*p+7*/
    printf("\nEl valor final de a es: %d", a);
   getch();

}
