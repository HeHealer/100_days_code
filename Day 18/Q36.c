//Q36: Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two positive numbers: ");
    scanf("%d%d",&a,&b);
    temp=b;
    while(b!=0)
    {
        b=a%b;
        a=temp;
    }
    printf("HCF(GCD)is: %d\n",a);
}