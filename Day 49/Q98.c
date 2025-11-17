//Q98: Print initials of a name with the surname displayed in full.

#include<stdio.h>
#include<string.h>
int main(){
    int i,len;
    char str[100];
    printf("Enter your full name: ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
    }
    if(str[0]!=' ')
    {
        printf("%c. ",str[0]);
    }
    int a=-1;
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i-1]==' ' && str[i]!=' ')
        {
            printf("%c. ",str[i]);
        }
        if(str[i]==' ')
        {
            a=i;
        }
    }
    if(a!=-1)
    {
        printf("%s/n",&str[a+1]);
    }
}