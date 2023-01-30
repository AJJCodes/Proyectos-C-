#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
int i;
	for(i=0;i<=30;i++){
		if(i<10||i>20){
			printf("\t%i",i);
		}
	}
	printf("\n Primera evaluacion i<10||i>20");

		printf("\n");
		printf("\n");
		printf("\n");

	for(i=0;i<=30;i++){
		if(!(i>=10 && i<=20)){
			printf("\t%i",i);
		}
	}
	printf(" \t Segunda evaluacion evaluacion !(i>=10 && i<=20)");
}
