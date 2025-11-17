//Q100: Print all sub-strings of a string.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,j,k;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            for(k=i;i<=j;k++)
            {
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
}