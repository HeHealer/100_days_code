//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include<stdio.h>
int main(){
    FILE *fptr;
    int ch;
    int line=0,character=0,word=0,in_word=0;
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
    while((ch=fgetc(fptr))!=EOF)
    {
        character++;
        if(ch=='\n')
        {
            line++;
        }
        if(ch==' ' || ch=='\n' || ch=='\t')
        {
            in_word=0;
        }
        else if(in_word=0)
        {
            word++;
            in_word=1;
        }
    }
    fclose(fptr);
    printf("Number of lines are: %d\n",line);
    printf("Number of characters are: %d\n",character);
    printf("Number of words are: %d\n",word);
}