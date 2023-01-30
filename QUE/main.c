#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main() {

	int alum;
	int i;
	int nota1p[50];

	system("cls");
	printf("\t\t Colegio Sendero la Luz\n");
	printf("\nNotas de estudiantes de tercer grado\n");
	printf("Digite la cantidad de alumnos que tiene\n---> ");scanf("%d",&alum);

	while((alum<=0)||(alum>50)){
		printf("Digite una cantidad de alumnos valida (1-50)\n---> ");scanf("%d",&alum);
	}

	system("cls");

	printf("\t\tNotas de los estudiantes\n\n");
	printf("Digite las notas del primer parcial de sus %d estudiantes\n ",alum);

	for(i=1;i<=alum;i++){
		printf("\nIngrese la nota del primer parcial del estudiante %d\n--->",i);
		scanf("%d",&nota1p[i]);

		while((nota1p[i]<=0)||(nota1p[i]>100)){
			printf("\nDigite una nota valida(0-100)\n-->");scanf("%d",&nota1p[i]);
		}
	}
	printf("melapelan");

	getch();
}
