//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main()
{
    int a,b,d;
    char c;
    printf("Enter the First number: ");
    scanf("%d", &a);
    printf("Enter the Second number: ");
    scanf("%d", &b);
    printf("Enter an operator (+, -, *, /,%%): ");
    scanf(" %c", &c);
    switch(c)
    {
        case '+':
        d=a+b;
        printf("Sum is: %d",d);
        break;
        case '-':
        d=a-b;
        printf("Difference is: %d",d);
        break;
        case '*':
        d=a*b;
        printf("Product is: %d",d);
        break;
        case '/':
        d=a/b;
        printf("Division is: %d",d);
        break;
        case '%':
        d=a%b;
        printf("Modulous is: %d",d);
        break;
        default:
        printf("Invalid Operator");
    }
}