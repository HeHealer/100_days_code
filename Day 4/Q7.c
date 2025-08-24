//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the First number: ");
    scanf("%d",&a);
    printf("Enter the Second number: ");
    scanf("%d",&b);
    printf("Before swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    return 0;
}