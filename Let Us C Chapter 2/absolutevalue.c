#include<stdio.h>
int main()
{
    int n, num;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    if(num<0)
    {
        num = (-1)*num;
    }
    printf("The absolute value of %d is %d",n , num);
    return 0;
}