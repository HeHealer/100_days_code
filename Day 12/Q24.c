//Q24: Write a program to calcuunits electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>
int main()
{
    int units,b,a;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units<=100)
    {
        b=units*5;
        printf("Your bill is: %d",b);
    }
    else if (units<=200)
    {
        a=units-100;
        b=(a*7)+500;
        printf("Your bill is: %d",b);
    }
    else if (units<=300)
    {
        a=units-200;
        b=(a*10)+1200;
        printf("Your bill is: %d\n",b);
    }
    else(units<300)
    {
        a=units-300;
        b=(a*12)+2200;
        printf("Your bill is: %d\n",b);
    }
    return 0;
}