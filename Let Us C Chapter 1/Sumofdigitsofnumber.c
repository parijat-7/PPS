#include<stdio.h>
int main()
{
    int n,d1,d2,d3,d4,d5;
    int sum=0;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a 5-digit number: ");
    scanf("%d",&n);
    d1=n%10;
    sum=sum+d1;
    n=n/10;
    d2=n%10;
    sum=sum+d2;
    n=n/10;
    d3=n%10;
    sum=sum+d3;
    n=n/10;
    d4=n%10;
    sum=sum+d4;
    n=n/10;
    d5=n%10;
    sum=sum+d5;
    printf("\nThe sum of digits of the number is %d",sum);

    return 0;
}