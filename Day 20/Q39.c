//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main(){
    int a,b,product=1,odd=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        if(b%2!=0)
        {
            product*=b;
            odd=1;
        }
        a/=10;
    }
    if(odd)
    {
        printf("Product of odd digits: %d",product);
    }
    else
    {
        printf("No odd digits found");
    }
}