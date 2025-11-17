//Q87: Count spaces, digits, and special characters in a string.

#include<stdio.h>
int main(){
    int i=0,space=0,digits=0,special=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(" ")
        {
            space++;
            i++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digits++;
            i++;
        }
        else
        {
            special++;
            i++;
        }
    }
    printf("Total spaces: %d\n",space);
    printf("Total digits: %d\n",digits);
    printf("Total special characters: %d\n",special);
}