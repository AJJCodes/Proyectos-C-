#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int i, j, m, n;
    int matrix[10][20];

    printf("Ingrese el numero de filas : ");
    scanf("%d", &m);
    printf("Ingrese el numero de columnas : ");
    scanf("%d", &n);
    system("cls");

    /* Para datos en la matriz*/

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Ingrese datos en la matriz [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Display the matrix */
    for (i = 0; i < m; i++)
    {
        if(i<1){
            for (j = 0; j < n; j++)
            {
            printf("%s%d\t", matrix[i][j]);
            }
        }else{
            if(i<2){

            }
        }
        printf("\n");
    }
}
