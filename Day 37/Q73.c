//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
    int matrix[3][3],i,j,sum[3];
    printf("Enter elements of 3x3 matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum[i]=0;
        for (j = 0; j < 3; j++)
        {
            sum[i]+=matrix[i][j];
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Sum of each row: \n");
    for (i = 0; i < 3; i++)
    {
        printf("Row %d sum= %d\n",i,sum[i]);
    }
}