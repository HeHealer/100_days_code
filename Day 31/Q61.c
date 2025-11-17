//Q61: Search for an element in an array using linear search.

#include<stdio.h>
int main(){
    int arr[100],n,k,i,found=0;
    printf("Enter  number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("Element %d found at position %d.\n",k,i+1);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("Element %d not found in the array.\n",k);
    }
}