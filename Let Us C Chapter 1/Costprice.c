#include<stdio.h>
int main()
{
    float cp, tsp, sp, tp, p;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the selling price of 15 items: Rs.");
    scanf("%f",&tsp);
    sp=(tsp)/15;
    printf("\nEnter the total profit earned: Rs.");
    scanf("%f",&tp);
    p=(tp)/15;
    cp=sp-p;
    printf("\nThe cost price of one item is %f",cp);
    return 0;
}