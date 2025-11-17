//Q92: Find the first repeating lowercase alphabet in a string.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int f[26]={0},i;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        ch=str[i];
        if(ch>='a'&&ch<='z')
        {
            f[ch-'a']++;
            if(f[ch-'a']==2)
            {
                printf("First repeating lowercase alphabet: %c\n",ch);
            }
        }
    }
    printf("No repeating.\n");
}