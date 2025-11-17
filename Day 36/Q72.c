//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int matrix[3][3],i,j,sum=0,value=1;
    printf("Enter elements of 3x3 matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }
    printf("\nSum of all elements in the matrix: %d\n", sum);
}