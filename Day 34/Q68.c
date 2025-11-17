//Q68: Delete an element from an array.

#include<stdio.h>
int main(){
    int arr[100],n,position,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the element you want to delete from(0 to %d): ",n-1);
    scanf("%d",&position);
    if(position<0||position>=n)
    {
        printf("Invalid position");
        return 1;
    }
    else
    {
        for(i=position;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("Array after deletion:\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}