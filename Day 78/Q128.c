//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int vowels=0,consonants=0;
    fp=fopen("info.txt","a");
    if(fp==NULL)
    {
        printf("ERROR");
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='I' || ch=='O' || ch=='E' || ch=='U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }
    printf("Vowels: %d\n Consonants: %d\n",vowels,consonants);
    fclose(fp);
}