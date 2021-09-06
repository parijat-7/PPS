#include<stdio.h>
int main()
{
    float k,m,f,i,c;//k=kilometers, m=meters, f=feet, i=inches, c=centimeters
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the distance in kilometers: ");
    scanf("%f",&k);
    m=k*1000;
    c=k*100000;
    f=k*3280.840000;
    i=k*39370.100000;
    printf("The distance in meters is %f",m);
    printf("\nThe distance in feet is %f",f);
    printf("\nThe distance in inches is %f",i);
    printf("\nThe distance in centimeters is %f",c);
    return 0;
}