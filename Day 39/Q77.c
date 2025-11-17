//Q77: Check if the elements on the diagonal of a matrix are distinct.

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
    int d0=matrix[0][0];
    int d1=matrix[1][1];
    int d2=matrix[2][2];
    if(d0!=d1 && d0!=d2 && d1!=d2)
    {
        printf("The elements are distinct.");
    }
    else
    {
        printf("The elements are not distinct.");
    }
}