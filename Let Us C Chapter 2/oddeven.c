#include<stdio.h>
int main()
{
    int n;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter a number to know whether it is odd or even: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}