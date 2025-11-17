//Q75: Add two matrices.

#include <stdio.h>
int main() {
    int m1[3][3],m2[3][3],i,j,sum[3][3];
    printf("Enter elements of 3x3 first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elements for matrix 1 [%d][%d]: ", i, j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter elements of 3x3 second matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elements for matrix 2 [%d][%d]: ", i, j);
            scanf("%d",&m2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}