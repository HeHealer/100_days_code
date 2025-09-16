//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main(){
    int i,n;
    float sum=0.0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        float nummerator=2*i-1;
        float denominator=2*i;
        sum=sum+(nummerator/denominator);
    }
    printf("The sum of the series up to %d terms is: %.2f\n",n,sum);
}