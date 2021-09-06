#include<stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, tm, p;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the marks of first subject: ");
    scanf("%f",&m1);
    printf("\nEnter the marks of second subject: ");
    scanf("%f",&m2);
    printf("\nEnter the marks of third subject: ");
    scanf("%f",&m3);
    printf("\nEnter the marks of fourth subject: ");
    scanf("%f",&m4);
    printf("\nEnter the marks of fifth subject: ");
    scanf("%f",&m5);
    tm=m1+m2+m3+m4+m5;
    p= (tm*100)/500;
    printf("The total marks of the student is %f", tm);
    printf("\nThe percentage of the student is %f", p);
    
    return 0;
}