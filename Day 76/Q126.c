//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include<stdio.h>
int main(){
    FILE *fptr;
    int ch;
    fptr=fopen("info.txt","r");
    if(fptr==NULL)
    {
        printf("The File does not exist or cannot be opened.");
        return 1;
    }
    ch=fgetc(fptr);
    if(ch==EOF)
    {
        printf("The file is empty");
    }
    else
    {
        printf("The file has the following content.\n");
        rewind(fptr);
        while((ch=fgetc(fptr))!=EOF)
        {
            putchar(ch);
        }
    }
    fclose(fptr);
}