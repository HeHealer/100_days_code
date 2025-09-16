//Q42: Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            printf("%d ",i);
        }
    }
    if(sum==n)
    {
        printf("\n%d is a perfect number",n);
    }
    else
    {
        printf("\n%d is not a perfect number",n);
    }
}