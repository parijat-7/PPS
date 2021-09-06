#include<stdio.h>
int main()
{
    int n;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Mulitplication table\n");
    printf("Enter a number to print its multiplication table: ");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}