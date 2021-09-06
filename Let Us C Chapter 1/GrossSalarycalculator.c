#include<stdio.h>
int main()
{
    float b,g;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter basic salary = ");
    scanf("%f",&b);
    g= b+(40*b)/100+(20*b)/100;
    printf("The Gross Salary is %f",g);
    return 0;  
}
