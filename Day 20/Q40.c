//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main(){
    int n,digit,temp,complement=0,place=1;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        if (digit==0)
        {
            complement+=1*place;
        }
        place*=10;
        temp/=10;
    }
    printf("1's complement of a binary number %d is: %d",n,complement);
}