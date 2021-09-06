#include<stdio.h>
int main() 
{
    int i,j,a[100];
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    for(i=0;i<100;i++) 
    {
        a[i]=i+1;
    }
    printf("\n100 numbers in the array \n");
    for(i=0;i<100;i++) 
    {
        printf("%d ",a[i]);
    }
    printf("\nAfter using the sieve of eratosthenes \n");
    for(i=2;i<100;i++) 
    {
        for(j=2;j<a[i];j++) 
        {
            if(a[i]%j==0)
            {
                a[i]=0;
            }
        }
    }
    i=a[0];
    for(;i<100;i++) 
    {
        printf("%d ",a[i]);
    }
    printf("\nPrime numbers are \n");
    for(i=a[0];i<100;i++) 
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}