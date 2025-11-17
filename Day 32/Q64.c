//Q64: Find the digit that occurs the most times in an integer number.

#include<stdio.h>
int frequent(int num)
{
    int f[10]={0};
    if(num<0)
    {
        num=-num;
    }
    while(num>0)
    {
        int digit=num%10;
        f[digit]++;
        num/=10;
    }
    int max=0,ans=0;
    for(int i=0;i<10;i++)
    {
        if(f[i]>max)
        {
            max=f[i];
            ans=i;
        }
    }
    return ans;
}
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int mostfrquent=mostfrquentdigit(n);
    printf("Most frequent figit: %d\n",mostfrquent);
}