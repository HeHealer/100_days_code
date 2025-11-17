//Q97: Print the initials of a name.

#include<stdio.h>
int main(){
    int i;
    char str[100];
    printf("Enter your full name: ");
    fgets(str,sizeof(str),stdin);
    if(str[0]!=' ')
    {
        printf("%c. ",str[0]);
    }
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i-1]==' ' && str[i]!=' ')
        {
            printf("%c. ",str[i]);
        }
    }
    printf("\n");
}