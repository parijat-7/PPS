#include<stdio.h>
int main()
{
    int n,d1,d2,d3,d4,d5;
    int rn=0;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a 5 digit number: ");
    scanf("%d",&n);
    d1=n%10;
    rn=rn+(d1*10000);
    n=n/10;
    d2=n%10;
    rn=rn+(d2*1000);
    n=n/10;
    d3=n%10;
    rn=rn+(d3*100);
    n=n/10;
    d4=n%10;
    rn=rn+(d4*10);
    n=n/10;
    d5=n%10;
    rn=rn+(d5*1);
    printf("\nThe number when reversed is %d",rn);
    return 0;
}