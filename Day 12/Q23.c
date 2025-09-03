//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

#include <stdio.h>
int main()
{
    int late,fine;
    printf("Enter the number of days the book is late: ");
    scanf("%d", &late);
    if (late<= 0)
    {
        printf("No fine. Book returned on time or early.\n");
    }
    else if (late<= 5)
    {
        fine = late*2;
        printf("Fine: %d\n",fine);
    }
    else if (late<= 10)
    {
        fine = (5*2) + ((late - 5) * 4);
        printf("Fine: %d\n", fine);
    }
    else if (late <= 30)
    {
        fine = (5 *2) + (5 * 4) + ((late - 10) * 6);
        printf("Fine: %d\n", fine);
    }
    else
    {
        printf("Membership Cancelled due to excessive delay.\n");
    }
    return 0;
}