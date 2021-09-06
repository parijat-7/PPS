#include<stdio.h>
int  main()
{
    int n,f=1;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter a number to find to find its factorial: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nThe factorial of %d is %d",n,f);
    return 0;
}