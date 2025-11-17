//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include<stdio.h>
int main(){
    int a[100],i,n,target;
    printf("Enter number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter  sorted array of elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("Enter the target: ");
    scanf("%d",&target);
    int p=-1,q=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            if(p==-1)
            {
                p=i;
                q=i;
            }
        }
    }
    if(p==-1)
    {
        printf("-1 -1\n");
    }
    else
    {
        printf("The first occurrence:%d\nThe last occurrence:%d\n",p,q);
    }
}