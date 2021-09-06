#include<stdio.h>
int main()
{
	int a, b, c;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
	printf("Enter three sides of triangle: \n");
	scanf("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf("Triangle is valid.");
	}
	else
	{
		printf("Triangle is not valid.");
	}
	return 0;
}