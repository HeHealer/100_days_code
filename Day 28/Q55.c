//Q55: Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>
int main(){
    int n,i,j,prime;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        prime=1;
    }
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            prime=0;
        }
    }
    if(prime)
    {
        printf("%d\n");
    }
}