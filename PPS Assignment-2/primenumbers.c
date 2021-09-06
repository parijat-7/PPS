#include<stdio.h>
int main()
{
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Printing all prime numbers between 1 and 300\n");
    int num, i, prime;
    for(num=1;num<=300;num++)
    {
        prime=0;
        
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                prime=1;
                break;
            }
        }

        if(prime==0 & num!=1) 
            printf(" %d ", num);
    }
    return 0;
}