#include<stdio.h>
int main()
{
    int i, j, k, count=1;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" %d",count);
            count++;
        }
    printf("\n");
    }
    return 0;
}