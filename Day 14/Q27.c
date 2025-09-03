//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main()
{
    int n,i,sum=0,count=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1;count<n;i+=2)
    {
    sum+=1;
    count++;
    }
    printf("Sum of the first %d odd numbers is: %d",n,sum);
}