//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the First number: ");
    scanf("%d",&a);
    printf("Enter the Second number: ");
    scanf("%d",&b);
    printf("Before swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("After swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
}