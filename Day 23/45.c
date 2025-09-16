//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main(){
    int n,i,numerator,denominator;
    float sum=0.0,term;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The series is: \n");
    for(i=1,numerator=2,denominator=3;i<=n;i);
    {
        term=(float)numerator/denominator;
        sum+=term;
        printf("%d/%d",numerator,denominator);
        if(i<n)
        {
            printf(" + ");
        }
    }
    printf("\nThe sum of the series up to %d terms is: %.2f\n",n,sum);
}