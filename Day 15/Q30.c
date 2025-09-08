//Q30: Write a program to reverse a given number.

#include<stdio.h>
int main(){
    int n,rem,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    printf("%d",sum);
}