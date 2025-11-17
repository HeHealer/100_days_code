//Q59: Count even and odd numbers in an array.

#include<stdio.h>
int main(){
    int a[10000],n=0,even=0,odd=0;
    char choice;
    do
    {
        printf("Enter number %d: ",n+1);
        scanf("%d",&a[n]);
        if(a[n]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n++;
        printf("Do you want to enter another number? (y/n):\n ");
        scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y');
    printf("Total numbers entered: %d\n",n);
    printf("Even n: %d\n",even);
    printf("Odd n: %d\n",odd);
}