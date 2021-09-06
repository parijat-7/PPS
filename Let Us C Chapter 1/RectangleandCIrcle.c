#include<stdio.h>
int main()
{
    float l,b,r,rectarea,p,cirarea,c;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the length of the rectangle: ");
    scanf("%f",&l);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%f",&b);
    printf("\nEnter the radius of the circle: ");
    scanf("%f",&r);
    p=2*(l+b);
    rectarea=l*b;
    c=(2*22*r)/7;
    cirarea=(22*r*r)/7;
    printf("The perimeter of the rectangle is %f", p);
    printf("\nThe area of the rectangle is %f", rectarea);
    printf("\nThe circumference of the circle is %f", c);
    printf("\nThe area of the circle is %f",cirarea);

    return 0;
}