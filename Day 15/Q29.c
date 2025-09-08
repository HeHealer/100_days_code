//Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>
int main(){
    int i=1,f=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("Factorial of %d is %d\n",n,f);   
}