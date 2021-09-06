#include<stdio.h>
int main()
{
    int n,f,l,sum;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a 4 digit number: ");
    scanf("%d",&n);
    l=n%10;
    n=n/1000;
    f=n%10;
    sum=f+l;
    printf("\nThe sum of first and last digit of the number is %d", sum);


    return 0;
}