//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    char str[1000],ch;
    fp1=fopen("D:/text1.txt","w");
    if(fp1==NULL)
    {
        printf("Error");
        return 1;
    }
    fprintf(fp1,"Hello World, This is C programming.\nI love Coding.");
    fclose(fp1);
    fp1=fopen("D:/text1.txt","r");
    if(fp1==NULL)
    {
        printf("Error");
        return 1;
    }
    fp2=fopen("D:/text2.txt","w");
    if(fp2==NULL)
    {
        printf("Error");
        return 1;
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fprintf(fp2,"%s",str);
    fclose(fp2);
}