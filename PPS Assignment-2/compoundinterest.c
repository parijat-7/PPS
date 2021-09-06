#include<stdio.h>
int main()
{
    int p,r,n,q,i,j,product;
    float a=1;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    for(i=0;i<10;i++)
    {
        a=1;
        printf("\nEnter the values of p: \n"); 
        scanf("%d",&p);
        printf("\nEnter the values of r: \n"); 
        scanf("%d",&r);
        printf("\nEnter the values of n: \n"); 
        scanf("%d",&n);
        printf("\nEnter the values of q: \n"); 
        scanf("%d",&q);
        product=n*q;
        for(j=1;j<=product;j++)
        {
        a = a * ( 1 +(float) r / q );
        }
        a= p*a;
        printf("\n%f",a);
    }
    return 0;
}