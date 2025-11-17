//Q66: Insert an element in a sorted array at the appropriate position.

#include<stdio.h>
int main(){
    int arr[100]={2,5,10,18,23},n=5,a,i;
    printf("Enter the number you want to be added: ");
    scanf("%d",&a);
    i=n-1;
    while(i>=0&&arr[i]>a)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=a;
    n++;
    printf("Array after insertion: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}