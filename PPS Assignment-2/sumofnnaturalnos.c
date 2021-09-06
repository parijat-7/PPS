#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a number to find sum of first n natural numbers: ");
    scanf("%d",&n);
    s=sum(n);
    printf("The sum of first %d natural numbers: %d",n,s);

    return 0;
}
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return (n+sum(n-1));
    }
}