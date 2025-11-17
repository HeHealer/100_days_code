//Q91: Remove all vowels from a string.

#include<stdio.h>
int vowel(char ch)
{
    return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');   
}
int main(){
    char str[100],ans[100];
    int i,j=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(!vowel(str[i]))
        {
            ans[j++]=str[i];
        }
    }
    ans[j]='\0';
    printf("String without vowels: %s\n",ans);
}