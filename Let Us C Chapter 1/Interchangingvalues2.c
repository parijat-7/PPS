#include<stdio.h>
int main()
{
    float c,d;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a number: ");
    scanf("%f",&c);
    printf("\nEnter another number: ");
    scanf("%f",&d);
    printf("\nThe value of C before interchange: %f",c); 
    printf("\nThe value of D before interchange: %f",d);
    d=c+d;
    c=d-c;
    d=d-c;
    printf("\nThe value of C after interchange: %f",c); 
    printf("\nThe value of D after interchange: %f",d);
    return 0;
}