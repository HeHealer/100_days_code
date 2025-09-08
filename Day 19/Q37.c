//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int main(){
    int a,b,x,y,lcm,hcf,temp;
    printf("Enter two positive Numbers: ");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    
    printf("LCM is: %d\n",lcm);
}