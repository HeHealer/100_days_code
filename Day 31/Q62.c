//Q62: Reverse an array without taking extra space.

#include<stdio.h>
void reverse(int arr[], int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Original array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    reverse(arr,size);
    printf("Reversed array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}