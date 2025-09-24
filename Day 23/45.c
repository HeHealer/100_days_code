//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>
int main(){
    int n,i,numerator,denominator;
    float sum=0.0,a;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    printf("The series is: \n");
    for(i=1,numerator=2,denominator=3;i<n;i)
    {
        a=(float)numerator/denominator;
        sum+=a;
        if(i<n)
        {
            printf("+");
        }
    }
    printf("The sum of the series is: %f",sum);
}