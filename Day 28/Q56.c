//Q56: Read and print elements of a one-dimensional array.

#include<stdio.h>
int main(){
    int size,arr[size],i;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}