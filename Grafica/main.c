#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>

void main(void)
{
    int adap=DETECT,modo,t;
    system("cls");
    initgraph(&adap,&modo,"C:\\TC20\\BIN");
    for(t=0;t<200;t++){
            putpixel(100+t,50+t,RED);
    }
    getch();
    closegraph();
}
