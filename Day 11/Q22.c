//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cp, sp, profit, loss, profit_percent, loss_percent;
    printf("Enter the Cost Price: ");
    scanf("%f", &cp);
    printf("Enter the Selling Price: ");
    scanf("%f", &sp);
    if (sp > cp)
    {
        profit = sp - cp;
        profit_percent = (profit / cp) * 100;
        printf("Profit: %f\n", profit);
        printf("Profit Percentage: %f\n", profit_percent);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        loss_percent = (loss / cp) * 100;
        printf("Loss: %f\n", loss);
        printf("Loss Percentage: %f\n", loss_percent);
    }
    else
    {
        printf("No Profit, No Loss\n");
    }
    return 0;
}
