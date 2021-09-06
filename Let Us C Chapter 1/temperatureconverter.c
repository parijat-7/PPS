#include<stdio.h>
int main()
{
    float f,c;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&f);
    c= (5*(f-32))/9;
    printf("The temperature in centigrades is %f",c);
    return 0;
}