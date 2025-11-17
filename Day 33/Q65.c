//Q65: Search in a sorted array using binary search.

#include<stdio.h>
int main(){
    int arr[]={2,5,8,12,16,23,38,56,72,91},size=sizeof(arr)/sizeof(arr[0]);
    int n,low=0,high=size-1,mid,found=0;
    printf("Enter the number you want to search: ");
    scanf("%d",&n);
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==n)
        {
            printf("Elements found at index %d\n",mid);
            found=1;
            break;
        }
        else if(arr[mid]<n)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(!found)
    {
        printf("Element not found.");
    }
}