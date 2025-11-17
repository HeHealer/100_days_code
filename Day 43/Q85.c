//Q85: Reverse a string.

#include<stdio.h>
int main(){
    char str[100];
    int i,len=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[len]!='\0')
    {
        if (str[len]=='\n')
        break;
        len++;
    }
    for(i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("Reversed string: %s",str);
}