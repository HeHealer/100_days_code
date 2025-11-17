//Q80: Multiply two matrices.

#include <stdio.h>
int main() {
    int m1[3][3],m2[3][3],m3[3][3],i,j,k;
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
            m3[i][j]=0;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for(k=0;k<3;k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    printf("Product of the two matrices is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
}