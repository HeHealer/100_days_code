//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,SI,CI,amount;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the annual interest rate: ");
    scanf("%f",&rate);
    printf("Enter the time period (in years): ");
    scanf("%f",&time);
    SI=(principal*rate*time)/100;
    amount=principal *pow((1 + rate / 100), time);
    CI=amount-principal;
    printf("Simple Interest is: %f\n",SI);
    printf("Compound Interest is: %f\n",CI);
    return 0;
}