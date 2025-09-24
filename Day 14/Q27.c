//Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){
    int n,sum=0,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=count;i+=2)
    {
        sum+=1;
        count++;
    }
    printf("Sum of the odd numbers is: ",sum);
}