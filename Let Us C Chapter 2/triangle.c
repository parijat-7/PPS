#include<stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c );
    sum = a+b+c;

    if (sum == 180)
    {   
        printf("Triangle is valid");
    }
    else
    {   
        printf("Triangle is not valid");
    }
    return 0;
}