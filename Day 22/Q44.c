//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main{
    int i,n;
    float sum=0.0,numerator,denominator;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        nummerator=2*i-1;
        denominator=2*i;
        sum=sum+(nummerator/denominator);
    }
    printf("the sum of the series: %f",sum);
}