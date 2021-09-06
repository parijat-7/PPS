#include<stdio.h>
int main()
{
    int n,d1,d2,d3,d4,d5;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a 5-digit number: ");
    scanf("%d",&n);
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d5=n%10;
    d1=(d1+1)%10;
    d2=(d2+1)%10;
    d3=(d3+1)%10;
    d4=(d4+1)%10;
    d5=(d5+1)%10;
    printf("The new number after adding 1 to each digit is %d%d%d%d%d",d5,d4,d3,d2,d1);
    

    return 0;
}