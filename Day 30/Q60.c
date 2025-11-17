//Q60: Count positive, negative, and zero elements in an array.

#include<stdio.h>
int main(){
    int a[10000],n=0,zero=0,positive=0,negative=0;
    char choice;
    do
    {
        printf("Enter number %d: ",n+1);
        scanf("%d",&a[n]);
        if(a[n]>0)
        {
            positive++;
        }
        else if(a[n]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
        n++;
        printf("Do you want to enter another number? (y/n):\n ");
        scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y');
    printf("Total numbers entered: %d\n",n);
    printf("Zero n: %d\n",zero);
    printf("Positive n: %d\n",positive);
    printf("Negative n: %d\n",negative);
}