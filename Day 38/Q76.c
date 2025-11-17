//Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int matrix[3][3],i,j,s=1;
    printf("Enter elements of 3x3 first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elements for matrix [%d][%d]: ", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            {
                s=0;
                break;
            }
        }
        if(!s)
        {
            break;
        }
    }
    if (s)
    {
        printf("It is symmetric.");
    }
    else
    {
        printf("Not symmetric");
    }
}