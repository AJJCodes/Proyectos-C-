#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define DATA_SIZE 1000

int main()
{
   char name[50];
   int marks, i, num;

   printf("Ingrese el numero de personas a agregar: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("C://MSI//Compa�eros.txt", "w"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }

   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);

      printf("Enter marks: ");
      scanf("%d", &marks);

      fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
   }

   fclose(fptr);
   return 0;
}
