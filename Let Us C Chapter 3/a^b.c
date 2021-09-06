#include<stdio.h>
int main()
{
    int a,b,r=1;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter 2 numbers (a,b) to find a^b = ");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        r=r*a;
    }
    printf("The value of a^b is %d",r);
    return 0;
}