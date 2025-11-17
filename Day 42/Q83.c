//Q83: Count vowels and consonants in a string.

#include<stdio.h>
int main(){
    char str[100];
    int vowels=0,cosonants=0,i;
    printf("Enter a string: ");
    fgets(str,sizeof (str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch>='A' && ch<='Z')
        {
            ch=ch+('a'-'A');
        }
        if(ch>='a' && ch<='z')
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                vowels++;
            }
            else
            {
                cosonants++;
            }
        }
    }
    printf("Vowels: %d",vowels);
    printf("Consonants: %d",cosonants);
}