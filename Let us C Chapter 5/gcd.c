#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Greatest Common Divisor of (%d, %d): %d",a,b,gcd(a,b));
    return 0;
}
int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}