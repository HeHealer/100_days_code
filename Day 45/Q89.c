//Q89: Count frequency of a given character in a string.

#include<stdio.h>
int main(){
    int i,n,k,f=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want the frequency of: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            f++;
        }
    }
    printf("The number %d appears to be %d times in the array.",k,f);
}