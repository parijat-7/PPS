#include<stdio.h>
void factorial(int n);
int main()
{
    int n;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a number to calculate the factorial of that nummber: \n");
    scanf("%d", &n);
    factorial(n);
    return 0;
}
void factorial(int n)
{
    int fact=1;
    for(int i= 1; i <= n; i++)
    {
    fact = fact * i;
    }
    printf("Factorial of %d = %d\n", n, fact);
}
