#include<stdio.h>
int main()
{
	int a[10], b[10], i, j;
	printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
	printf("\nEnter 10 Elements : \n");
	for (i = 0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0, j = 9; i<10; i++, j--)
	{
		b[i] = a[j];
	}
	printf("\nArray after copying the contents of one array in reverse order: \n");
	for (i = 0; i<10; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}