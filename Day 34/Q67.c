//Q67: Insert an element in an array at a given position.

#include<stdio.h>
int main(){
    int arr[100]={3,6,9,12,15,18},n=6,p,a,i;
    printf("Enter the number you want to insert: ");
    scanf("%d",&a);
    printf("Enter the position(0 to %d): ",n);
    scanf("%d",&p);
    if (p<0||p>n)
    {
        printf("Invalid position!\n");
        return 1;
    }
    for(i=n-1;i>p;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[p]=a;
    n++;
    printf("Array after inertation: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}