//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include<stdio.h>
int main(){
    FILE *fp;
    char str[1000];
    fp=fopen("info.txt","a");
    if(fp==NULL)
    {
        printf("ERROR");
    }
    printf("Enter a line: ");
    fgets(str,sizeof(str),stdin);
    fprintf(fp,"%s",str);
    fclose(fp);
}