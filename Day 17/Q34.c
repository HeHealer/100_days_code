//Q34: Write a program to check if a number is prime.

#include<stdio.h>
int main(){
    int n,i,prime;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if(n<=1)
    {
        prime=0;
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                prime=0;
            }
        }
    }
    if(prime=0)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not a prime number");
    }
}