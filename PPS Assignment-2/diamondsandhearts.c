#include<stdio.h>
int main()
{
	int i,a=3,b=4;
	printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
	for(i=1;i<=780;i++)
	{
	      if(i%2==0)
		printf(" %c ",a);
	      if(i%2!=0)
		printf(" %c ",b);
	}
	return 0;
}