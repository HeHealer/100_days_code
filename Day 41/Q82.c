//Q82: Print each character of a string on a new line.

#include<stdio.h>
int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='\n')
        {
            printf("%c\n",str[i]);
        }
    }
}