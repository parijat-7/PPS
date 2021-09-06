#include<stdio.h>
int binary(int);
int main()
{
    int n,b;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the number for which you have to find the binary equivalent: ");
    scanf("%d",&n);
    b=binary(n);
    printf("The binary equivalent is %d",b);
    return 0;
}
int binary(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
    return (n%2+10*binary(n/2));
    }
}