//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    printf("Enter the First number: ");
    scanf("%d", &a);
    printf("Enter the Second number: ");
    scanf("%d", &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("The sum of the two numbers is: %d\n",c);
    printf("The difference of the two numbers is: %d\n",d);
    printf("The product of the two numbers is: %d\n",e);
    printf("The division of the two numbers is: %d\n",f);
    return 0;
}