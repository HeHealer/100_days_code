//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include<stdio.h>
#include<string.h>

int main(){
    char date[15],day[3],month[3],year[5];
    printf("Enter date in the format dd/04/yyyy: ");
    scanf("%s/%s/%s",date,month,year);
    if(strcmp(month, "04"))
    {
        printf("Formatted date: %s-Apr-%s",date,year);
    }
    else
    {
        printf("Invalid");
    }
}