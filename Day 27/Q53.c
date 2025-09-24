/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/


#include<stdio.h>
int main(){
    int i,j,rows=5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}