//Q63: Merge two arrays.

#include<stdio.h>
void merge(int arr1[],int size1,int arr2[],int size2,int merged[])
{
    for(int i=0;i<size1;i++)
    {
        merged[i]=arr1[i];
    }
    for(int j=0;j<size2;j++)
    {
        merged[size1+j]=arr2[j];
    }
}
int main(){
    int arr1[]={1,3,5};
    int arr2[]={2,4,6};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int merged[size1+size2];
    merge(arr1,size1,arr2,size2,merged);
    printf("Merged array: ");
    for(int i=0;i<size1+size2;i++)
    {
        printf("%d",merged[i]);
    }
}