//Q96: Reverse each word in a sentence without changing the word order.

#include<stdio.h>
#include<string.h>
void REVERSE(char *str,int start,int end)
{
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main(){
    char sentence[10000000];
    printf("Enter a sentence: ");
    fgets(sentence,sizeof(sentence),stdin);
    size_t len=strlen(sentence);
    if(len>0&&sentence[len-1]=='\n')
    {
        sentence[len-1]='\0';
    }
    int i=0,word=0;
}