//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    float radius,pi,area,cir;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    pi=3.14;
    area=pi*radius*radius;
    cir=2*pi*radius;
    printf("The area of the circle is: %f\n",area);
    printf("The circumference of the circle is: %f\n",cir);
    return 0;
}