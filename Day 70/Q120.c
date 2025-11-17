//Q120: Write a program to take a string input. Change it to sentence case.

#include<stdio.h>
int main(){
    char str[1000];
    int i,a=1;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        if(a && str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
            a=0;
        }
        if(str[i]=='.' || str[i]=='?' || str[i]=='!')
        {
            a=1;
        }
    }
    printf("Sentence Case: %s",str);
}