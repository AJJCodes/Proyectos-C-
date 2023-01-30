#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main() {
	int alum[3], i,p=2;
	/*P contador si es segundo o 3er año*/
	printf("Sistema de notas\n");
	for(i=1;i<=3-1;i++){
        printf("Ingrese la cantidad de estudiantes en %d a%co\n --> ",p,164);
        scanf("%d",&alum[i]);
        /*Validacion*/
        while((alum[i]>40)||(alum[i]<0)){
            printf("Error , Ingrese una cantidad valida\n--> ");
            scanf("%d",&alum[i]);
        }
        p++;
	}
	printf("%d",alum[1]);
	getch();
}
