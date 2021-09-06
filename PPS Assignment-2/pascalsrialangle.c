#include<stdio.h>
int main()
{
    int n = 1, space, i, j;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Program to print Pascal's triangle upto 5 rows\n");
    for(i=0; i<5; i++)
    {
        for(space=1; space <= 5-i; space++)
        {
        printf(" ");
        }
        for(j=0; j <= i; j++)
        {
        if (j==0 || i==0)
        {
        n = 1;
        }
        else
        {
            n = n*(i-j+1)/j;
        }
        printf(" %d", n);
        }
    printf("\n");
    }
return 0;
}