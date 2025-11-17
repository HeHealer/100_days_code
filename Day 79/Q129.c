//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int n,sum=0,count=0;
    float average=0;
    fp=fopen("info.txt","a");
    if(fp==NULL)
    {
        printf("ERROR");
    }
    while(fscanf(fp,"%d",&n)==1)
    {
        sum+=n;
        count++;
    }
    fclose(fp);
    if(count>0)
    {
        average=(float)sum/count;
        printf("Sum: %d\nAverage: %f",sum,average);
    }
    else
    {
        printf("No integers found.");
    }
}