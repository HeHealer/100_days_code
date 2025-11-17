//Q79: Perform diagonal traversal of a matrix.

#include<stdio.h>
int main(){
    int matrix[3][3],i,j;
    printf("Enter elements of 3x3 first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elements for matrix [%d][%d]: ", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Diagonal traversal: \n");
    for(int k=0;k<3;k++)
    {
        i=k;
        j=0;
        while (i>=0 && j<3)
        {
            printf("%d ",matrix[i][j]);
            i--;
            j++;
        }
    }
    for(int k=1;k<3;k++)
    {
        i=2;
        j=k;
        while (i>=0 && j<3)
        {
            printf("%d ",matrix[i][j]);
            i--;
            j++;
        }
    }
}